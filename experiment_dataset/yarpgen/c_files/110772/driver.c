#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)87;
short var_11 = (short)31493;
_Bool var_13 = (_Bool)1;
signed char var_16 = (signed char)-15;
int zero = 0;
unsigned long long int var_20 = 9319723291260666894ULL;
unsigned int var_21 = 203626713U;
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
