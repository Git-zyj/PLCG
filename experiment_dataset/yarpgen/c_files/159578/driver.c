#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12182572327635961397ULL;
unsigned char var_10 = (unsigned char)167;
unsigned char var_15 = (unsigned char)221;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2023667873U;
void init() {
}

void checksum() {
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
