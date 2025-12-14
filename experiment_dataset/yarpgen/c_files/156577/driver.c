#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
unsigned int var_1 = 3612928139U;
signed char var_2 = (signed char)-88;
signed char var_3 = (signed char)-36;
long long int var_5 = -1490689653294491864LL;
unsigned int var_6 = 2801023092U;
unsigned char var_7 = (unsigned char)239;
long long int var_8 = 1124677441808101692LL;
int zero = 0;
unsigned short var_10 = (unsigned short)62886;
int var_11 = 1905943291;
unsigned short var_12 = (unsigned short)30260;
int var_13 = 484879716;
signed char var_14 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
