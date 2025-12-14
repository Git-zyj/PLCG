#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4192112941U;
unsigned int var_5 = 3280609211U;
unsigned char var_7 = (unsigned char)21;
unsigned int var_16 = 2459812270U;
int zero = 0;
unsigned char var_20 = (unsigned char)237;
unsigned char var_21 = (unsigned char)178;
unsigned int var_22 = 1115819039U;
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
