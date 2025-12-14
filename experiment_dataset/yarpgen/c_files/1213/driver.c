#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2390960178U;
_Bool var_6 = (_Bool)1;
int var_7 = 592688327;
long long int var_11 = 2843328472139066822LL;
signed char var_12 = (signed char)-99;
signed char var_15 = (signed char)-115;
int zero = 0;
unsigned short var_17 = (unsigned short)5540;
unsigned short var_18 = (unsigned short)25942;
unsigned short var_19 = (unsigned short)20;
signed char var_20 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
