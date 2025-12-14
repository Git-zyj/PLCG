#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4734319502349390554LL;
unsigned long long int var_5 = 5545991264695240732ULL;
signed char var_6 = (signed char)104;
int var_7 = 267160630;
unsigned long long int var_8 = 7173911602988521481ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -1264405763;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)18497;
_Bool var_13 = (_Bool)1;
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
