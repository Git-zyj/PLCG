#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1212054180;
short var_2 = (short)6601;
unsigned char var_3 = (unsigned char)160;
unsigned long long int var_5 = 4245018019945048426ULL;
signed char var_7 = (signed char)-114;
int zero = 0;
unsigned char var_13 = (unsigned char)182;
int var_14 = 2044762761;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
