#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1590066669;
short var_7 = (short)27676;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 14443225406006058367ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 3850934685065007507LL;
short var_17 = (short)-541;
short var_18 = (short)-21522;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
