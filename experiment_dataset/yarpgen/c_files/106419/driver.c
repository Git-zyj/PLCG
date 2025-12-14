#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3638855700963423150LL;
long long int var_5 = -4632089759199093532LL;
unsigned short var_8 = (unsigned short)39136;
short var_11 = (short)23682;
int zero = 0;
long long int var_15 = -2559964527813539055LL;
unsigned long long int var_16 = 15049031564045702125ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
