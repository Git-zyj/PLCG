#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11534;
unsigned long long int var_7 = 3927698140988970882ULL;
int zero = 0;
unsigned int var_15 = 1686578568U;
unsigned int var_16 = 2097041002U;
unsigned short var_17 = (unsigned short)4934;
unsigned char var_18 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
