#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21593;
int var_3 = 524021122;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 10799696957816672700ULL;
long long int var_9 = 4682901838737456309LL;
int zero = 0;
unsigned int var_14 = 2168577553U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
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
