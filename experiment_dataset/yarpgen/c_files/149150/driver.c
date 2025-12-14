#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5387;
unsigned char var_3 = (unsigned char)88;
signed char var_6 = (signed char)5;
unsigned int var_8 = 4230848936U;
int zero = 0;
unsigned short var_18 = (unsigned short)10895;
unsigned char var_19 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
