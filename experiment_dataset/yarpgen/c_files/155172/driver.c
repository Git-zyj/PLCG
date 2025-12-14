#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13850;
_Bool var_10 = (_Bool)1;
long long int var_11 = -7809641929785751381LL;
long long int var_13 = -129383564112322274LL;
int zero = 0;
unsigned long long int var_18 = 7500111214944946607ULL;
int var_19 = 1135723418;
short var_20 = (short)13397;
void init() {
}

void checksum() {
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
