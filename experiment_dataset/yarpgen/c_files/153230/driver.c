#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-114;
signed char var_5 = (signed char)66;
long long int var_8 = 7912663497820118254LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)113;
_Bool var_18 = (_Bool)1;
long long int var_19 = 3050640046696295596LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
