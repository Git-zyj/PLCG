#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1549841179;
signed char var_6 = (signed char)-119;
_Bool var_9 = (_Bool)0;
short var_11 = (short)32643;
long long int var_12 = -20933698525351398LL;
int var_13 = -20979549;
int var_18 = -433080317;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)24635;
_Bool var_21 = (_Bool)1;
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
