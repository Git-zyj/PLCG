#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 3233365484778825469ULL;
long long int var_4 = 3701868778713060007LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3392516755901516099ULL;
unsigned long long int var_11 = 11425086647264741234ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -8277730669405909120LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2811949276352073785LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
