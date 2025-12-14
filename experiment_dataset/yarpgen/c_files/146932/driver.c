#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1125065643170414001ULL;
long long int var_6 = -1451276844611861218LL;
long long int var_8 = -1871298437929425708LL;
long long int var_15 = 6804448415846891732LL;
long long int var_16 = -2387793632877498701LL;
int zero = 0;
unsigned int var_17 = 1234370586U;
unsigned int var_18 = 4280664506U;
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
