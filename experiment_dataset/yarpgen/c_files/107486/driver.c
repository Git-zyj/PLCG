#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5539848470336431962LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11406397908123609414ULL;
int var_4 = 1406240746;
unsigned long long int var_5 = 3486770051634210241ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 69034673U;
signed char var_8 = (signed char)121;
int zero = 0;
unsigned int var_11 = 2848327808U;
int var_12 = -468162825;
int var_13 = 1112570125;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
