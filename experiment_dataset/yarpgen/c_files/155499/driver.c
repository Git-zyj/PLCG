#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9522116151218992539ULL;
int var_1 = 2108600192;
unsigned int var_4 = 1924375128U;
_Bool var_7 = (_Bool)0;
long long int var_8 = 2566184471766858887LL;
unsigned int var_17 = 1129430008U;
signed char var_18 = (signed char)-88;
int zero = 0;
short var_20 = (short)12610;
unsigned short var_21 = (unsigned short)59798;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
