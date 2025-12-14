#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 15874396022809953682ULL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)124;
unsigned short var_4 = (unsigned short)21318;
long long int var_5 = 2190582886857442942LL;
long long int var_7 = -4588309252890924737LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_13 = 3767994065261684866LL;
long long int var_14 = 2635628460758739705LL;
unsigned int var_15 = 2997959032U;
long long int var_16 = -6548640385845317898LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
