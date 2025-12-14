#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3925995486U;
unsigned long long int var_7 = 11467135730372146022ULL;
unsigned int var_8 = 4184953075U;
int zero = 0;
unsigned int var_17 = 2371985469U;
unsigned long long int var_18 = 493719418517701743ULL;
void init() {
}

void checksum() {
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
