#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2150372578U;
long long int var_6 = -7141214276586154445LL;
unsigned long long int var_8 = 17507795079930906752ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)44328;
int var_14 = -2134544771;
short var_15 = (short)-1357;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
