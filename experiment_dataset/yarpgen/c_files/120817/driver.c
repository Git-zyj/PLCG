#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3346978766U;
unsigned int var_1 = 392271988U;
unsigned int var_3 = 561241951U;
unsigned short var_5 = (unsigned short)28463;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
unsigned short var_14 = (unsigned short)62558;
unsigned short var_15 = (unsigned short)47382;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
