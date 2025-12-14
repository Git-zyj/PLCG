#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15156189710200421616ULL;
unsigned int var_1 = 229556862U;
unsigned int var_5 = 1573737020U;
int var_8 = -497535731;
unsigned long long int var_11 = 7717252608197184874ULL;
long long int var_12 = -4287309008823484620LL;
int zero = 0;
int var_16 = -2028678806;
long long int var_17 = -4880632517819529232LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
