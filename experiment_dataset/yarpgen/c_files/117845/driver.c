#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
signed char var_4 = (signed char)-75;
long long int var_5 = 3073240985024704226LL;
long long int var_6 = 3124196785078482174LL;
signed char var_8 = (signed char)-106;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-24;
long long int var_17 = 2011736940910535017LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
