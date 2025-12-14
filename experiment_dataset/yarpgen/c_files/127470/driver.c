#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5029722820649655294LL;
long long int var_3 = 797154821680931808LL;
signed char var_4 = (signed char)47;
unsigned char var_5 = (unsigned char)54;
signed char var_6 = (signed char)-7;
long long int var_9 = -4343520452421180296LL;
short var_14 = (short)31654;
long long int var_15 = -7404614548693614974LL;
short var_16 = (short)-16154;
signed char var_17 = (signed char)66;
int zero = 0;
signed char var_20 = (signed char)0;
unsigned int var_21 = 800629824U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
