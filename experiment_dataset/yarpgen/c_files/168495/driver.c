#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4023338484258687533LL;
_Bool var_3 = (_Bool)1;
long long int var_6 = -4124884940556190352LL;
short var_7 = (short)18534;
unsigned int var_8 = 3900831517U;
unsigned long long int var_9 = 13925337658836775503ULL;
int zero = 0;
int var_10 = 486128961;
short var_11 = (short)13281;
long long int var_12 = -2044646143660338635LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
