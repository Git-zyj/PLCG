#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
unsigned short var_4 = (unsigned short)48382;
unsigned int var_16 = 746281372U;
int zero = 0;
unsigned int var_18 = 1600441139U;
unsigned int var_19 = 17793521U;
short var_20 = (short)-9720;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
