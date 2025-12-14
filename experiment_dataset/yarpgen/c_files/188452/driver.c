#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2773181044U;
unsigned long long int var_4 = 3439658303855504848ULL;
int zero = 0;
unsigned int var_12 = 2997974143U;
unsigned char var_13 = (unsigned char)199;
int var_14 = -1099961211;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
