#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)30469;
int var_10 = -1343547659;
unsigned long long int var_11 = 912958428164565184ULL;
int var_12 = 738524627;
int zero = 0;
unsigned long long int var_14 = 319022106341437625ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)31934;
void init() {
}

void checksum() {
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
