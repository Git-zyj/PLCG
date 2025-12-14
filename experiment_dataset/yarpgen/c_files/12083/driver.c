#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7308376707721214546LL;
unsigned int var_8 = 3911579186U;
long long int var_12 = -5650777909420490780LL;
int var_14 = 1538103409;
int zero = 0;
long long int var_15 = -5980581783468602136LL;
signed char var_16 = (signed char)26;
unsigned char var_17 = (unsigned char)114;
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
