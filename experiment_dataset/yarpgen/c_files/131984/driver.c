#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2529426361256192391LL;
unsigned short var_4 = (unsigned short)9333;
int zero = 0;
unsigned short var_15 = (unsigned short)9472;
unsigned int var_16 = 2979977059U;
signed char var_17 = (signed char)22;
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
