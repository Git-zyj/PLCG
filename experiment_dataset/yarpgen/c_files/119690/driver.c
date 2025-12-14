#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6478115635940570206ULL;
unsigned char var_3 = (unsigned char)82;
unsigned int var_13 = 1468578960U;
unsigned char var_14 = (unsigned char)229;
short var_18 = (short)-20676;
int zero = 0;
long long int var_19 = -3800218997449826282LL;
unsigned short var_20 = (unsigned short)51253;
unsigned long long int var_21 = 1141719837158686816ULL;
unsigned int var_22 = 3091014897U;
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
