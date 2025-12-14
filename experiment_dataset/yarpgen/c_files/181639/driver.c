#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -102276806;
int var_12 = 823498397;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5287685273987559769LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_20 = (short)3125;
unsigned char var_21 = (unsigned char)106;
long long int var_22 = -5817937453566134981LL;
signed char var_23 = (signed char)74;
_Bool var_24 = (_Bool)1;
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
