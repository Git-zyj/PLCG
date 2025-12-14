#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18158970116763274377ULL;
unsigned long long int var_2 = 15057305089594391984ULL;
int zero = 0;
unsigned long long int var_14 = 10507104061603015746ULL;
unsigned long long int var_15 = 12660976001178626890ULL;
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
