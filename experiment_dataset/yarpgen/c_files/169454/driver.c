#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3528328092U;
unsigned long long int var_4 = 9570343802936791100ULL;
short var_6 = (short)5962;
int var_9 = -1195463857;
long long int var_11 = -9202119330383967960LL;
unsigned int var_12 = 2630680655U;
unsigned short var_13 = (unsigned short)16234;
long long int var_14 = -8526157394280404992LL;
int zero = 0;
unsigned long long int var_17 = 1544589260246810379ULL;
unsigned long long int var_18 = 6437852164961011523ULL;
unsigned int var_19 = 331826401U;
long long int var_20 = -6824485092250597697LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
