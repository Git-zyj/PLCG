#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3705700640973432999ULL;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = -881918660;
unsigned int var_9 = 685626548U;
int zero = 0;
long long int var_11 = -525604258174556521LL;
long long int var_12 = 1943942368090462412LL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)22817;
unsigned int var_15 = 4171183268U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
