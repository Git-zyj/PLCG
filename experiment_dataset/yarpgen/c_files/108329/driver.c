#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_8 = 7341649436528067368LL;
unsigned int var_9 = 1167859416U;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)12595;
unsigned char var_12 = (unsigned char)247;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)235;
long long int var_20 = 8591180654949687105LL;
unsigned short var_21 = (unsigned short)42311;
unsigned char var_22 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
