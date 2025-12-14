#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-23394;
signed char var_8 = (signed char)82;
unsigned long long int var_15 = 16363547657868354678ULL;
unsigned long long int var_17 = 5290211325530566026ULL;
int zero = 0;
long long int var_19 = 6480039926457497992LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)130;
short var_22 = (short)4557;
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
