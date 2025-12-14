#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10167179855029022526ULL;
unsigned char var_13 = (unsigned char)124;
unsigned long long int var_18 = 14068174515258652241ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)70;
short var_20 = (short)-25458;
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
