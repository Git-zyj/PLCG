#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -406244596904464553LL;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-122;
_Bool var_8 = (_Bool)1;
int var_11 = -2077902161;
int zero = 0;
unsigned long long int var_12 = 4599328277877666456ULL;
unsigned long long int var_13 = 8495695433678535296ULL;
void init() {
}

void checksum() {
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
