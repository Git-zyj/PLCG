#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3834485727U;
unsigned int var_6 = 3068533716U;
unsigned long long int var_8 = 4573545826497975690ULL;
signed char var_9 = (signed char)-124;
unsigned int var_11 = 1064049923U;
int zero = 0;
unsigned char var_13 = (unsigned char)151;
int var_14 = 1997183100;
void init() {
}

void checksum() {
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
