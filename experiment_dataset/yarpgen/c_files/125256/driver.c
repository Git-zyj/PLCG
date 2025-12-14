#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12688;
unsigned long long int var_6 = 11941287511509309112ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)99;
signed char var_21 = (signed char)-118;
_Bool var_22 = (_Bool)0;
int var_23 = -606210238;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
