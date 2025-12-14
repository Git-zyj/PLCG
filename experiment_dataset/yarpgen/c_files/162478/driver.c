#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1813028950;
unsigned short var_2 = (unsigned short)15237;
unsigned long long int var_5 = 16529456027772009785ULL;
long long int var_8 = -7609761042546506967LL;
long long int var_9 = 5753110687083999037LL;
unsigned long long int var_10 = 2799079099723587779ULL;
long long int var_12 = -2167922903234322004LL;
int var_13 = 2053482739;
unsigned short var_14 = (unsigned short)26766;
int zero = 0;
unsigned int var_15 = 2555645069U;
long long int var_16 = -5478493522576979686LL;
unsigned int var_17 = 2113840058U;
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
