#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16614548697456746936ULL;
unsigned short var_3 = (unsigned short)11189;
int var_7 = -1503327068;
unsigned int var_13 = 725297781U;
long long int var_14 = 1759997376101703453LL;
int zero = 0;
unsigned short var_15 = (unsigned short)37375;
unsigned short var_16 = (unsigned short)18991;
long long int var_17 = -256077942125547557LL;
long long int var_18 = -2199488068387062222LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
