#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-437;
short var_7 = (short)30696;
_Bool var_9 = (_Bool)1;
short var_15 = (short)-26013;
int zero = 0;
short var_20 = (short)3292;
unsigned short var_21 = (unsigned short)61862;
short var_22 = (short)24233;
short var_23 = (short)-31432;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
