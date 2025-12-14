#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11649559603164099019ULL;
long long int var_2 = -2592062067275025120LL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)3043;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 1392408250;
signed char var_13 = (signed char)-99;
void init() {
}

void checksum() {
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
