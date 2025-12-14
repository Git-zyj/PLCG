#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11159;
_Bool var_3 = (_Bool)1;
long long int var_6 = -7192978523274734045LL;
unsigned int var_8 = 838479982U;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 4841222673005603368LL;
int var_12 = -124475675;
unsigned int var_13 = 1867429597U;
unsigned long long int var_14 = 8814546423890407862ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
