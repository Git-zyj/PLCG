#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)88;
unsigned int var_4 = 374007334U;
int var_5 = 2040349082;
unsigned char var_7 = (unsigned char)141;
signed char var_12 = (signed char)-46;
short var_13 = (short)-4417;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)60;
unsigned char var_16 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
