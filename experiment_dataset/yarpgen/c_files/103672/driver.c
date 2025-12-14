#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2926437642422067503LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)250;
int var_7 = 2058476616;
int zero = 0;
signed char var_10 = (signed char)65;
long long int var_11 = 1748705993525262703LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
