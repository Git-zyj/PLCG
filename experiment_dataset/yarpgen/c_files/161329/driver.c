#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 1816003429U;
int zero = 0;
unsigned short var_14 = (unsigned short)38533;
unsigned short var_15 = (unsigned short)50689;
signed char var_16 = (signed char)51;
unsigned int var_17 = 689557299U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
