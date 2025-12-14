#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47200;
signed char var_3 = (signed char)8;
unsigned short var_6 = (unsigned short)48586;
long long int var_8 = 8608628360967418684LL;
signed char var_9 = (signed char)85;
unsigned short var_10 = (unsigned short)746;
unsigned short var_13 = (unsigned short)55383;
short var_16 = (short)-16403;
int zero = 0;
signed char var_20 = (signed char)-24;
short var_21 = (short)23227;
int var_22 = 1141445439;
signed char var_23 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
