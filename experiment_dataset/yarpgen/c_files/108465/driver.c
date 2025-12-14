#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1135622026255491871LL;
unsigned long long int var_2 = 11012613168429920702ULL;
_Bool var_5 = (_Bool)0;
int zero = 0;
int var_14 = 1257758245;
signed char var_15 = (signed char)6;
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
