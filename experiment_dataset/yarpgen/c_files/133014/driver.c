#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 35815794U;
unsigned int var_14 = 3042372894U;
unsigned int var_17 = 4122651943U;
int zero = 0;
long long int var_18 = -4440319019785901129LL;
unsigned int var_19 = 3559935722U;
_Bool var_20 = (_Bool)1;
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
