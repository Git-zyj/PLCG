#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1939347171787811879LL;
signed char var_5 = (signed char)39;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)149;
int zero = 0;
long long int var_16 = 8252609885343171136LL;
long long int var_17 = -4583674191843743787LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
