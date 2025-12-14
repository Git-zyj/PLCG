#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)44;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-81;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -5542713455274747042LL;
long long int var_21 = 888710576028484195LL;
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
