#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 299582656;
unsigned char var_1 = (unsigned char)95;
int var_2 = -2053232243;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-86;
int var_7 = 2146075710;
int zero = 0;
long long int var_10 = -6772530036434083170LL;
unsigned int var_11 = 3574076415U;
signed char var_12 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
