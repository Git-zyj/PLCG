#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5981008468763882745LL;
signed char var_6 = (signed char)110;
unsigned int var_7 = 2459880967U;
signed char var_8 = (signed char)70;
unsigned long long int var_17 = 8903730935875102994ULL;
int zero = 0;
short var_18 = (short)19788;
unsigned int var_19 = 1798210623U;
_Bool var_20 = (_Bool)0;
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
