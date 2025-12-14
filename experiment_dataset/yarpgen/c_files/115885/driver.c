#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
int var_4 = 27737445;
signed char var_6 = (signed char)-42;
signed char var_7 = (signed char)30;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_13 = 688732011;
short var_14 = (short)11872;
short var_15 = (short)27655;
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
