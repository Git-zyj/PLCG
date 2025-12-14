#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20644;
long long int var_2 = 6763515018706921891LL;
long long int var_3 = 8816927487223823636LL;
long long int var_8 = 2899460182079493405LL;
long long int var_9 = -9162165152738703783LL;
int zero = 0;
short var_10 = (short)-4939;
short var_11 = (short)14906;
long long int var_12 = 4997784292208035264LL;
short var_13 = (short)-21271;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
