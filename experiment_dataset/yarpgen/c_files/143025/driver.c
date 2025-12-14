#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2549967896321863678LL;
_Bool var_12 = (_Bool)1;
int var_15 = 1424462087;
int zero = 0;
unsigned int var_19 = 1266828728U;
unsigned int var_20 = 956079216U;
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
