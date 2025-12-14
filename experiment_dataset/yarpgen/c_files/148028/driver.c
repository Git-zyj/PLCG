#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13487871017284744770ULL;
unsigned long long int var_3 = 12646271832617738943ULL;
long long int var_5 = -1958949951274224548LL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-115;
int zero = 0;
long long int var_20 = -649621799452838888LL;
signed char var_21 = (signed char)-99;
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
