#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2147696325074771091ULL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-101;
int zero = 0;
signed char var_18 = (signed char)43;
_Bool var_19 = (_Bool)1;
short var_20 = (short)14023;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
