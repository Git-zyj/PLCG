#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29127;
signed char var_3 = (signed char)-15;
short var_6 = (short)20378;
unsigned short var_17 = (unsigned short)16051;
int zero = 0;
int var_19 = 773715028;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10571471986720921661ULL;
long long int var_22 = -8474075443484777886LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
