#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10185235786921669714ULL;
int var_6 = 1942964683;
short var_10 = (short)24164;
long long int var_12 = 5762863623664182222LL;
int zero = 0;
int var_20 = 13437988;
unsigned int var_21 = 2159365965U;
long long int var_22 = 1968615724373041486LL;
short var_23 = (short)-29961;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
