#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1755042935;
signed char var_4 = (signed char)47;
unsigned long long int var_6 = 8596180527419541092ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)118;
int zero = 0;
unsigned short var_17 = (unsigned short)39887;
unsigned char var_18 = (unsigned char)31;
signed char var_19 = (signed char)50;
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
