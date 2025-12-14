#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
unsigned char var_2 = (unsigned char)213;
unsigned char var_3 = (unsigned char)66;
unsigned long long int var_5 = 742373015389817552ULL;
unsigned int var_6 = 1457354764U;
signed char var_8 = (signed char)-59;
long long int var_10 = -7703962135610918028LL;
int zero = 0;
short var_12 = (short)25710;
short var_13 = (short)-32491;
unsigned int var_14 = 391150621U;
unsigned short var_15 = (unsigned short)62474;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
