#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36916;
int var_5 = 229280692;
int var_8 = -835621710;
unsigned short var_11 = (unsigned short)9632;
int var_12 = 358447611;
signed char var_15 = (signed char)-36;
int zero = 0;
signed char var_17 = (signed char)-119;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
