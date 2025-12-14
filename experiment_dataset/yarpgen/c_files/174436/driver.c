#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16641;
unsigned char var_4 = (unsigned char)32;
unsigned short var_8 = (unsigned short)29322;
unsigned char var_18 = (unsigned char)182;
int zero = 0;
unsigned long long int var_19 = 1361084139037221000ULL;
short var_20 = (short)-29079;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
