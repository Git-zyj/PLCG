#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2067214835392998927LL;
int var_1 = 1911503354;
long long int var_2 = 4384848441271243LL;
unsigned long long int var_3 = 2845329638385472772ULL;
unsigned char var_4 = (unsigned char)44;
short var_5 = (short)6480;
long long int var_6 = -9150608369216639078LL;
unsigned char var_11 = (unsigned char)77;
int zero = 0;
signed char var_13 = (signed char)113;
long long int var_14 = -363561359940517655LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
