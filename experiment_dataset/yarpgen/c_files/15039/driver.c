#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2872198635U;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)31;
unsigned int var_14 = 2715512919U;
int zero = 0;
unsigned int var_15 = 3878022543U;
unsigned int var_16 = 2339479447U;
void init() {
}

void checksum() {
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
