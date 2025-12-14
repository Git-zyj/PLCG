#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_6 = 17113524423387728621ULL;
unsigned short var_11 = (unsigned short)43504;
unsigned long long int var_14 = 16038970390355547161ULL;
signed char var_15 = (signed char)1;
int zero = 0;
int var_16 = -1754787401;
short var_17 = (short)-18560;
unsigned long long int var_18 = 2551762600546180423ULL;
unsigned long long int var_19 = 11815938692632753423ULL;
short var_20 = (short)15568;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
