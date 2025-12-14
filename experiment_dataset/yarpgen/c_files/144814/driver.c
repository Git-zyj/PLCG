#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
unsigned short var_4 = (unsigned short)4378;
signed char var_5 = (signed char)-16;
unsigned char var_6 = (unsigned char)118;
unsigned short var_8 = (unsigned short)10108;
unsigned char var_9 = (unsigned char)140;
unsigned short var_13 = (unsigned short)14984;
signed char var_14 = (signed char)111;
int zero = 0;
signed char var_15 = (signed char)99;
long long int var_16 = -2438370386442013662LL;
signed char var_17 = (signed char)-67;
void init() {
}

void checksum() {
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
