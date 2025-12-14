#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2303674981138940064ULL;
unsigned char var_4 = (unsigned char)11;
short var_5 = (short)23855;
short var_9 = (short)-18468;
int zero = 0;
unsigned char var_12 = (unsigned char)66;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4038969363U;
unsigned int var_15 = 88593922U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
