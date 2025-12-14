#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2086275785;
_Bool var_6 = (_Bool)1;
int var_7 = 1555859643;
int var_8 = -1076035779;
int zero = 0;
int var_10 = 1082642251;
signed char var_11 = (signed char)-40;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
