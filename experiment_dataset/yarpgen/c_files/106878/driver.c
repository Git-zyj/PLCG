#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1956117132U;
unsigned long long int var_6 = 14272474906357624170ULL;
unsigned short var_9 = (unsigned short)14409;
_Bool var_12 = (_Bool)1;
short var_15 = (short)31383;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2286767030U;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5504676706453912694ULL;
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
