#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47216;
unsigned int var_6 = 537855047U;
signed char var_8 = (signed char)-48;
_Bool var_9 = (_Bool)1;
signed char var_15 = (signed char)13;
unsigned long long int var_16 = 5377626886164791638ULL;
int zero = 0;
long long int var_20 = -3638304610827438163LL;
short var_21 = (short)-26433;
int var_22 = 802622006;
unsigned short var_23 = (unsigned short)45517;
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
