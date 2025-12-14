#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10771442478148075151ULL;
int var_1 = -550385381;
_Bool var_2 = (_Bool)0;
long long int var_3 = 1712960498466346855LL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)122;
unsigned short var_8 = (unsigned short)21796;
_Bool var_9 = (_Bool)1;
long long int var_10 = -8189028588418507674LL;
int zero = 0;
signed char var_13 = (signed char)96;
int var_14 = 709531449;
long long int var_15 = -1356006892373685580LL;
unsigned short var_16 = (unsigned short)31896;
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
