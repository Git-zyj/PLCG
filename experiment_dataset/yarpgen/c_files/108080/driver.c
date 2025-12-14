#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1792296587;
long long int var_2 = 7270390051279683883LL;
signed char var_4 = (signed char)-18;
int var_5 = -1203239346;
signed char var_7 = (signed char)41;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -1136235931;
short var_14 = (short)-18408;
void init() {
}

void checksum() {
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
