#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)238;
signed char var_7 = (signed char)58;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-121;
signed char var_19 = (signed char)30;
short var_20 = (short)17755;
signed char var_21 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
