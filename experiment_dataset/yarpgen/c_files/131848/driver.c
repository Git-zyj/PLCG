#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_5 = (short)16730;
signed char var_6 = (signed char)13;
signed char var_8 = (signed char)-28;
signed char var_9 = (signed char)49;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)52;
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
