#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_11 = 5023060731112338065LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1819194588U;
long long int var_14 = -5128977025312001947LL;
unsigned short var_15 = (unsigned short)40282;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
