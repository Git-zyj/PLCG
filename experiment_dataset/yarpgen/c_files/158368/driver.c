#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
_Bool var_1 = (_Bool)0;
long long int var_3 = -8326011513660672086LL;
long long int var_4 = -3569811920765828550LL;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_11 = (short)14610;
int zero = 0;
signed char var_13 = (signed char)86;
_Bool var_14 = (_Bool)1;
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
