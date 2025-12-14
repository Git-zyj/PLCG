#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39526;
int var_2 = 588132498;
_Bool var_6 = (_Bool)1;
int var_7 = -1906820725;
long long int var_8 = 2335909080004970218LL;
long long int var_9 = -3584263556570257238LL;
unsigned char var_11 = (unsigned char)18;
short var_12 = (short)-9824;
long long int var_14 = 4976208435283850819LL;
int zero = 0;
unsigned char var_15 = (unsigned char)60;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
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
