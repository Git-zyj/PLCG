#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1472614154765378343LL;
long long int var_5 = -4175206753886104185LL;
unsigned int var_8 = 1507149176U;
short var_9 = (short)7680;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_13 = -282819100294111579LL;
int var_14 = -1001631574;
unsigned long long int var_15 = 6984566855104597594ULL;
int var_16 = 762156406;
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
