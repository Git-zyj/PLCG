#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
long long int var_14 = -1109045575041784199LL;
unsigned short var_15 = (unsigned short)62128;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-13;
unsigned short var_21 = (unsigned short)29282;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
