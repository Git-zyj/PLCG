#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2323679742U;
short var_4 = (short)-25711;
_Bool var_11 = (_Bool)0;
unsigned int var_16 = 1654856008U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-23296;
unsigned int var_19 = 2692638723U;
long long int var_20 = -6182909358571231476LL;
int var_21 = 715666012;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
