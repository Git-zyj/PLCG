#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1893113292343040462ULL;
long long int var_2 = -1384146376030864408LL;
unsigned char var_3 = (unsigned char)150;
signed char var_15 = (signed char)80;
int zero = 0;
int var_16 = -837595686;
unsigned char var_17 = (unsigned char)64;
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
