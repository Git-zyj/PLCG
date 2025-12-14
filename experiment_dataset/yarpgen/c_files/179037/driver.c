#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14569056742230718480ULL;
unsigned long long int var_3 = 1524564963616826315ULL;
unsigned int var_4 = 3108547392U;
short var_6 = (short)-7903;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1959315012U;
int var_11 = -1604250489;
int var_14 = 1243398747;
unsigned long long int var_16 = 10863666757146405325ULL;
int zero = 0;
unsigned long long int var_17 = 6581356980704758704ULL;
unsigned long long int var_18 = 13946551002122315973ULL;
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
