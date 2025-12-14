#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6490932813519692113ULL;
long long int var_11 = 2145397565671549766LL;
unsigned short var_13 = (unsigned short)34602;
int zero = 0;
long long int var_16 = -5406637943470637303LL;
unsigned short var_17 = (unsigned short)28757;
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
