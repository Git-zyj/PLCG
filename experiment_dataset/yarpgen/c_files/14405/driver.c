#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 268551265;
long long int var_1 = 6848838063641864980LL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3523458156U;
signed char var_8 = (signed char)39;
int zero = 0;
unsigned int var_19 = 1951881516U;
int var_20 = 1433270795;
void init() {
}

void checksum() {
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
