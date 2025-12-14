#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8492874242835775048LL;
unsigned long long int var_1 = 14256965865315301291ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 2332817198U;
int zero = 0;
unsigned int var_12 = 3564479423U;
int var_13 = -1449811094;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
