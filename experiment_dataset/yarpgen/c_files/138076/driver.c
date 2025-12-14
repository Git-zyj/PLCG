#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1629064285;
short var_3 = (short)-15161;
int var_14 = 610359598;
unsigned int var_16 = 1374795979U;
int zero = 0;
long long int var_20 = -261099353229168051LL;
unsigned char var_21 = (unsigned char)5;
unsigned char var_22 = (unsigned char)77;
short var_23 = (short)2284;
signed char var_24 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
