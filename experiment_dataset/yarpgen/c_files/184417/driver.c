#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4169246937U;
signed char var_4 = (signed char)48;
unsigned char var_5 = (unsigned char)147;
unsigned char var_11 = (unsigned char)196;
int var_12 = -1416868860;
long long int var_15 = -7106571712753232798LL;
long long int var_16 = -1455158831476534115LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8780625282461794599LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 2444296182366018867LL;
signed char var_21 = (signed char)-59;
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
