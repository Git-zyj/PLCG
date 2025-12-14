#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13393359452881781086ULL;
unsigned char var_1 = (unsigned char)56;
unsigned long long int var_4 = 9095102643132175036ULL;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)47;
unsigned int var_12 = 3597823769U;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
