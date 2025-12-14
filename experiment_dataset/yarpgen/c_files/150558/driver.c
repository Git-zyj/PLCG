#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3253556042U;
int var_1 = -2022741295;
signed char var_2 = (signed char)-120;
unsigned long long int var_3 = 18043716315038967270ULL;
short var_6 = (short)-11532;
int var_7 = 1189658986;
unsigned char var_10 = (unsigned char)133;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)61;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 306264506;
signed char var_16 = (signed char)9;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
