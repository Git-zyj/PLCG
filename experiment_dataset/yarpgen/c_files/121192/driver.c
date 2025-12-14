#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 17533517179121482677ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14012985387394398838ULL;
int zero = 0;
short var_18 = (short)7051;
short var_19 = (short)16060;
int var_20 = 210617276;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
