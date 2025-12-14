#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 204751334;
_Bool var_4 = (_Bool)1;
short var_11 = (short)12665;
int var_12 = 2043170884;
int zero = 0;
int var_15 = -1107989990;
short var_16 = (short)21065;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
