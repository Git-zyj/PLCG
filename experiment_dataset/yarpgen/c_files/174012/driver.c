#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18612;
signed char var_2 = (signed char)20;
int var_3 = -1728946959;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)33475;
unsigned short var_7 = (unsigned short)53789;
signed char var_9 = (signed char)94;
unsigned char var_11 = (unsigned char)146;
int var_12 = 1428015311;
int var_13 = -706014034;
int zero = 0;
signed char var_14 = (signed char)39;
unsigned char var_15 = (unsigned char)134;
unsigned char var_16 = (unsigned char)217;
signed char var_17 = (signed char)45;
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
