#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6869291812282970236ULL;
unsigned long long int var_6 = 18303965073415611852ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)1294;
signed char var_21 = (signed char)3;
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
