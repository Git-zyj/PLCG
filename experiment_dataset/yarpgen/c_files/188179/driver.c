#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1872938103U;
signed char var_4 = (signed char)-14;
unsigned long long int var_9 = 5719602549689718906ULL;
signed char var_14 = (signed char)-46;
short var_15 = (short)-29719;
short var_16 = (short)17303;
unsigned short var_17 = (unsigned short)62296;
signed char var_18 = (signed char)-23;
int zero = 0;
unsigned short var_19 = (unsigned short)46686;
short var_20 = (short)-30820;
signed char var_21 = (signed char)124;
unsigned short var_22 = (unsigned short)33544;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
