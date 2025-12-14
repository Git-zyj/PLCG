#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 935864144;
unsigned int var_2 = 2007198872U;
unsigned int var_5 = 1115505322U;
_Bool var_7 = (_Bool)1;
int var_8 = -189504494;
unsigned int var_10 = 1088373857U;
unsigned int var_11 = 2836679127U;
int zero = 0;
unsigned int var_12 = 557077676U;
unsigned int var_13 = 3174616306U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2897658408U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
