#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)41805;
short var_11 = (short)14303;
long long int var_13 = 4667078274422699343LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -444917741350762594LL;
long long int var_19 = 1162280154523522035LL;
int var_20 = -1276599120;
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
