#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)29893;
int zero = 0;
long long int var_19 = 701107016981121485LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)5756;
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
