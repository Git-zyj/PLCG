#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3780681134U;
unsigned int var_4 = 3669732312U;
unsigned short var_7 = (unsigned short)63654;
int zero = 0;
unsigned long long int var_15 = 11258447129542290491ULL;
unsigned int var_16 = 3507408643U;
unsigned long long int var_17 = 8166027797324111446ULL;
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
