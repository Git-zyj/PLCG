#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-126;
short var_6 = (short)25273;
signed char var_8 = (signed char)30;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)29562;
int zero = 0;
unsigned long long int var_14 = 3456343725939859692ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)6665;
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
