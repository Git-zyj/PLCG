#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8522115883776578790LL;
int var_4 = -2137816650;
signed char var_8 = (signed char)-107;
unsigned long long int var_11 = 1303019314468956559ULL;
_Bool var_14 = (_Bool)0;
int var_15 = -1844174858;
int zero = 0;
unsigned long long int var_17 = 16191467667626204261ULL;
int var_18 = -2041375496;
int var_19 = 2124502149;
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
