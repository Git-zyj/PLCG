#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 166325736;
signed char var_10 = (signed char)-78;
signed char var_11 = (signed char)-74;
signed char var_12 = (signed char)-93;
unsigned long long int var_16 = 12911031894347423841ULL;
short var_18 = (short)-30471;
int zero = 0;
int var_20 = 1844093284;
_Bool var_21 = (_Bool)0;
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
