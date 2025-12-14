#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 4266494737895385723LL;
long long int var_6 = -7074019035505359654LL;
int var_10 = -689019330;
unsigned long long int var_11 = 2461256169069136406ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 20076097;
void init() {
}

void checksum() {
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
