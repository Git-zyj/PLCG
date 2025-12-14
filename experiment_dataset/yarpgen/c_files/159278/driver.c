#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30445;
short var_1 = (short)-13015;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1997780130U;
unsigned long long int var_7 = 3771367290666495416ULL;
unsigned long long int var_9 = 15921543924206545926ULL;
int zero = 0;
int var_12 = 260408733;
unsigned int var_13 = 950439269U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
