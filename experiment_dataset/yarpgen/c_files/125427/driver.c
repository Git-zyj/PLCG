#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -268588442;
short var_7 = (short)-29241;
unsigned char var_8 = (unsigned char)50;
signed char var_9 = (signed char)19;
int zero = 0;
unsigned char var_11 = (unsigned char)9;
unsigned char var_12 = (unsigned char)158;
int var_13 = 1934180025;
signed char var_14 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
