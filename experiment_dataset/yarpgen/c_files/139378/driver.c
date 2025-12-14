#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 177868789;
unsigned int var_4 = 2457691638U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 6979577697731824868ULL;
long long int var_13 = -6864576869136137947LL;
signed char var_15 = (signed char)-101;
unsigned short var_16 = (unsigned short)39613;
int zero = 0;
int var_18 = -1973247104;
unsigned short var_19 = (unsigned short)61633;
int var_20 = 191027027;
short var_21 = (short)70;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
