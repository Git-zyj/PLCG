#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1998553905U;
long long int var_3 = 5587790716135174335LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_14 = 2283886389969391884ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -319938374;
long long int var_19 = -4518320293514702910LL;
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
