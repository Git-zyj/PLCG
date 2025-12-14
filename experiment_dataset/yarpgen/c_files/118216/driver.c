#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-53;
signed char var_7 = (signed char)111;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)18;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
