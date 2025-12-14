#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2086055532;
unsigned short var_3 = (unsigned short)62119;
long long int var_5 = -3229611994683494180LL;
short var_7 = (short)-31270;
unsigned long long int var_11 = 14836480706785798656ULL;
int zero = 0;
short var_13 = (short)-5927;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)62;
short var_16 = (short)1869;
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
