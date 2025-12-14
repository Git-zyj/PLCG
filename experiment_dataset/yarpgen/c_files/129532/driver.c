#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2504531443U;
short var_8 = (short)-13670;
unsigned int var_9 = 3346979998U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 11319690171624018205ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
