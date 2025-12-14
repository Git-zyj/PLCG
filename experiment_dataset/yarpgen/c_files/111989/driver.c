#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 439275144675869383LL;
unsigned char var_6 = (unsigned char)96;
unsigned int var_8 = 4210240718U;
int zero = 0;
int var_10 = 1378781711;
long long int var_11 = -5007680173712614736LL;
short var_12 = (short)14665;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
