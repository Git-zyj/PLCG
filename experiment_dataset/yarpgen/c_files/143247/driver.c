#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7324404649214123373LL;
unsigned short var_3 = (unsigned short)2543;
signed char var_6 = (signed char)116;
int var_7 = 1214669770;
signed char var_8 = (signed char)11;
signed char var_11 = (signed char)-71;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3030466023U;
unsigned int var_14 = 3970210822U;
signed char var_15 = (signed char)-73;
long long int var_16 = -4783703100699107385LL;
long long int var_17 = 4375030736852471233LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
