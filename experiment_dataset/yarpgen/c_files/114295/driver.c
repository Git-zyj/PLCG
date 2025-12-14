#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3491773539276354202LL;
short var_2 = (short)21352;
long long int var_7 = -3599434635819055546LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_14 = 5301627231638049071ULL;
int zero = 0;
unsigned long long int var_16 = 10138570560297062947ULL;
unsigned int var_17 = 3119341417U;
signed char var_18 = (signed char)62;
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
