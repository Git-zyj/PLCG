#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
long long int var_9 = 2358045329416018437LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3975184887U;
short var_15 = (short)759;
int zero = 0;
short var_16 = (short)-7319;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-19825;
unsigned long long int var_19 = 5496643890072882181ULL;
unsigned char var_20 = (unsigned char)0;
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
