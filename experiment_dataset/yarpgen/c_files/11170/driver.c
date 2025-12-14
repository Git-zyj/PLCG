#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1102832046;
_Bool var_3 = (_Bool)1;
int var_8 = -530982456;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-26124;
int var_12 = 481580376;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)30216;
signed char var_18 = (signed char)81;
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
