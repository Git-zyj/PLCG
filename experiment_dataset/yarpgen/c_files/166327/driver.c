#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11716;
long long int var_3 = 884344929913321359LL;
unsigned short var_10 = (unsigned short)20063;
unsigned long long int var_14 = 4338074890196952825ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)62682;
long long int var_19 = -6749960612849233657LL;
int zero = 0;
unsigned short var_20 = (unsigned short)62725;
short var_21 = (short)15671;
unsigned short var_22 = (unsigned short)30262;
unsigned char var_23 = (unsigned char)28;
int var_24 = 1217046879;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
