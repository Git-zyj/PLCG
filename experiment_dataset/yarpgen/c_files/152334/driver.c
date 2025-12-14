#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)101;
long long int var_3 = -7634358492578585859LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 1029607648513499638ULL;
int zero = 0;
long long int var_13 = -7118588179163201399LL;
signed char var_14 = (signed char)-102;
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
