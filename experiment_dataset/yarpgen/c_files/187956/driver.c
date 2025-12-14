#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2428;
unsigned long long int var_3 = 7206473617302700722ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 2182536736U;
unsigned int var_12 = 1984564664U;
int var_13 = -1663286962;
unsigned long long int var_14 = 15321265108664439994ULL;
short var_15 = (short)-29792;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
