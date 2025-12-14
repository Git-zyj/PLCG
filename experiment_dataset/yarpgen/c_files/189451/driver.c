#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2752428044U;
signed char var_7 = (signed char)5;
unsigned char var_8 = (unsigned char)194;
short var_13 = (short)22001;
int zero = 0;
unsigned int var_14 = 2058887740U;
short var_15 = (short)-32603;
void init() {
}

void checksum() {
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
