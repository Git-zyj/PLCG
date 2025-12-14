#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 667145087U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)2125;
_Bool var_7 = (_Bool)0;
short var_11 = (short)-4404;
int var_12 = 403774762;
int zero = 0;
unsigned int var_13 = 2867296195U;
long long int var_14 = -7926758876193397554LL;
long long int var_15 = -2444178329582420442LL;
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
