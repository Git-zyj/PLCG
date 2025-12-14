#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6040256887724321855LL;
unsigned int var_10 = 2300410499U;
unsigned long long int var_12 = 3188116171858893252ULL;
unsigned int var_13 = 910451724U;
int zero = 0;
unsigned int var_14 = 387453830U;
int var_15 = 506244721;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
long long int var_18 = 5287907855415492364LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
