#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_5 = 1433748458;
long long int var_7 = -7951953616594433575LL;
unsigned short var_8 = (unsigned short)4327;
unsigned short var_9 = (unsigned short)13939;
unsigned int var_11 = 3233051840U;
int zero = 0;
unsigned int var_17 = 1401181028U;
long long int var_18 = 5044773165937700173LL;
unsigned short var_19 = (unsigned short)48295;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
