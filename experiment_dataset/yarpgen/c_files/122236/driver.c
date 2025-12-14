#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5186319070404378544ULL;
int var_3 = -1262399070;
long long int var_10 = -8275683126100778530LL;
int zero = 0;
signed char var_19 = (signed char)56;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)51864;
void init() {
}

void checksum() {
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
