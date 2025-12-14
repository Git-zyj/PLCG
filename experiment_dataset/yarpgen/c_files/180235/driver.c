#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-66;
unsigned int var_6 = 1935034162U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -3301143615845574138LL;
signed char var_13 = (signed char)-24;
unsigned long long int var_14 = 1547801314737269316ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
