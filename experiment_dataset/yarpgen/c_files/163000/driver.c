#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1433987767U;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)3132;
signed char var_9 = (signed char)56;
int zero = 0;
long long int var_10 = 158927404762530729LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
