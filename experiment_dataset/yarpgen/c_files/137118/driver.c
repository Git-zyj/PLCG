#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 1986293708;
_Bool var_3 = (_Bool)0;
int var_5 = 619958167;
unsigned int var_6 = 3565739753U;
unsigned int var_9 = 2734445078U;
unsigned char var_10 = (unsigned char)93;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2016301641U;
unsigned int var_18 = 4025902357U;
unsigned int var_19 = 3474806039U;
long long int var_20 = -2107434489191847053LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
