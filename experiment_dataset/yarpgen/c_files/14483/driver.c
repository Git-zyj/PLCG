#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
int var_2 = -930845685;
_Bool var_4 = (_Bool)0;
int var_6 = 1605578159;
short var_8 = (short)28314;
signed char var_12 = (signed char)-7;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)75;
void init() {
}

void checksum() {
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
