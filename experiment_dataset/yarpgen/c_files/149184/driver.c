#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6350055276753843098ULL;
int var_9 = -42356063;
signed char var_12 = (signed char)-107;
int zero = 0;
int var_13 = -973587299;
long long int var_14 = 6674213309062601105LL;
unsigned long long int var_15 = 11302728319343304118ULL;
signed char var_16 = (signed char)55;
short var_17 = (short)7918;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
