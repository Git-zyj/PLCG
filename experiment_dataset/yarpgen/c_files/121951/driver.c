#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)68;
unsigned int var_6 = 179410399U;
int var_8 = 676199198;
unsigned int var_12 = 1456266150U;
int zero = 0;
unsigned char var_15 = (unsigned char)64;
signed char var_16 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
