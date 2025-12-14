#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6378752705306103271ULL;
unsigned short var_8 = (unsigned short)53996;
int var_9 = -2070741570;
int zero = 0;
signed char var_14 = (signed char)24;
unsigned long long int var_15 = 5943398750523706633ULL;
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
