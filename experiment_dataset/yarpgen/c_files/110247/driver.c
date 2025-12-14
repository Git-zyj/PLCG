#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
unsigned int var_3 = 2879391045U;
int var_11 = -1463626459;
int zero = 0;
unsigned char var_16 = (unsigned char)13;
signed char var_17 = (signed char)98;
unsigned char var_18 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
