#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1436241563;
signed char var_4 = (signed char)38;
signed char var_7 = (signed char)-83;
unsigned char var_12 = (unsigned char)156;
int zero = 0;
unsigned char var_13 = (unsigned char)107;
unsigned char var_14 = (unsigned char)21;
unsigned short var_15 = (unsigned short)65423;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
