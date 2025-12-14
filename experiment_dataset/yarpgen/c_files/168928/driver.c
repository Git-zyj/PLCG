#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 73759695U;
long long int var_6 = 4699863126516508258LL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)76;
int zero = 0;
int var_18 = 1060475723;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-22;
int var_21 = 6160141;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
