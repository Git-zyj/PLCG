#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18620;
int var_8 = 794430639;
unsigned int var_10 = 943083594U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 228839482172258593ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 1357322500406201453LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-973;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
