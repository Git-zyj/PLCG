#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)109;
unsigned int var_4 = 14474250U;
unsigned int var_8 = 1047409796U;
unsigned short var_9 = (unsigned short)11654;
signed char var_10 = (signed char)47;
int zero = 0;
unsigned int var_11 = 406847509U;
unsigned long long int var_12 = 620589022474172557ULL;
int var_13 = 1571294873;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
