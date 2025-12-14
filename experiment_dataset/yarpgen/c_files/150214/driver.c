#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8937978178081577582LL;
long long int var_8 = -3222769500139121577LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)-271;
short var_20 = (short)-2985;
long long int var_21 = -6286980326293258315LL;
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
