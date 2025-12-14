#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
unsigned char var_1 = (unsigned char)24;
int var_3 = -350085720;
unsigned int var_5 = 725570284U;
int var_6 = 372111224;
signed char var_10 = (signed char)-34;
unsigned char var_11 = (unsigned char)71;
signed char var_12 = (signed char)-40;
int zero = 0;
long long int var_15 = -5206773471781871022LL;
long long int var_16 = 4718897100429489340LL;
short var_17 = (short)10562;
unsigned char var_18 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
