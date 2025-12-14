#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1461251403U;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)44;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2385968488U;
unsigned long long int var_9 = 5912657503904700948ULL;
unsigned int var_10 = 2766605263U;
int zero = 0;
unsigned long long int var_15 = 6149878944467360706ULL;
unsigned int var_16 = 3672622438U;
unsigned char var_17 = (unsigned char)66;
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
