#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3553177673296967040LL;
long long int var_1 = 3515710325419721321LL;
signed char var_5 = (signed char)24;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3911677766200651700ULL;
long long int var_15 = -2796345042102466936LL;
signed char var_16 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
