#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 386465546U;
unsigned int var_4 = 463552048U;
long long int var_7 = 6969079421172179860LL;
long long int var_8 = 6648765850171062314LL;
short var_13 = (short)19987;
unsigned char var_14 = (unsigned char)192;
unsigned char var_16 = (unsigned char)102;
int var_18 = -326295489;
int zero = 0;
long long int var_20 = -6111275674025383421LL;
unsigned short var_21 = (unsigned short)601;
long long int var_22 = 3348864880731303303LL;
void init() {
}

void checksum() {
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
