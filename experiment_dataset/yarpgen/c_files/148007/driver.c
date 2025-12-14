#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1077299477U;
unsigned char var_7 = (unsigned char)175;
signed char var_14 = (signed char)-114;
int zero = 0;
unsigned int var_15 = 2184160877U;
unsigned char var_16 = (unsigned char)122;
unsigned int var_17 = 2189340615U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
