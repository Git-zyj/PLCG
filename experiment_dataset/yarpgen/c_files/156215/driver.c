#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
unsigned int var_3 = 3854720133U;
unsigned int var_6 = 2870094232U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)44;
int zero = 0;
unsigned int var_17 = 4268810299U;
long long int var_18 = 8432075419619927475LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
