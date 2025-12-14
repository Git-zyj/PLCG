#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3772881743488573458LL;
int var_3 = 1357817895;
long long int var_4 = 6591419079222640639LL;
unsigned long long int var_7 = 13724360585820546867ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)62;
long long int var_17 = 3728118911459721193LL;
int zero = 0;
unsigned int var_18 = 4057813762U;
unsigned long long int var_19 = 13419649935781167594ULL;
long long int var_20 = -5205040363179297303LL;
short var_21 = (short)4312;
short var_22 = (short)-17947;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
