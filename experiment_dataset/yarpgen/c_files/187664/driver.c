#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
long long int var_1 = -5987085125121097874LL;
unsigned short var_4 = (unsigned short)41680;
int var_10 = -1791751715;
unsigned long long int var_13 = 18337345825342203667ULL;
int zero = 0;
short var_14 = (short)-18002;
signed char var_15 = (signed char)-50;
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
