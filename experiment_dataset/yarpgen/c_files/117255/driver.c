#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 842880583U;
short var_1 = (short)28085;
unsigned int var_8 = 2186379288U;
short var_11 = (short)-2530;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)31605;
int var_14 = -1482221181;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
