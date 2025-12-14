#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 278866588;
unsigned int var_4 = 3347976674U;
unsigned long long int var_14 = 3589131559484532427ULL;
signed char var_16 = (signed char)82;
int zero = 0;
unsigned short var_20 = (unsigned short)54998;
unsigned short var_21 = (unsigned short)23936;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
