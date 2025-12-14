#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27760;
_Bool var_4 = (_Bool)1;
long long int var_5 = 8889027977903192198LL;
int zero = 0;
long long int var_14 = -6502845880107765294LL;
unsigned int var_15 = 414008956U;
unsigned int var_16 = 2500720762U;
void init() {
}

void checksum() {
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
