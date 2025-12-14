#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42506;
unsigned long long int var_9 = 7263284147903893619ULL;
unsigned int var_10 = 2568827116U;
unsigned short var_11 = (unsigned short)52787;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_17 = 2812964652U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)54858;
void init() {
}

void checksum() {
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
