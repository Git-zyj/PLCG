#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_6 = (short)23827;
signed char var_7 = (signed char)23;
int var_8 = -1511473546;
int var_11 = 2136218527;
int var_14 = 1526728862;
int zero = 0;
int var_17 = -1090791604;
int var_18 = 50195372;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
