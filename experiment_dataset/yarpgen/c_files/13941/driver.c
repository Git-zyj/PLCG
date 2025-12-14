#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-15775;
signed char var_15 = (signed char)-24;
unsigned short var_18 = (unsigned short)10107;
unsigned char var_19 = (unsigned char)218;
int zero = 0;
signed char var_20 = (signed char)-69;
int var_21 = 535122460;
signed char var_22 = (signed char)-83;
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
