#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31794;
long long int var_2 = -2072054675088753608LL;
unsigned long long int var_3 = 17933003337380736671ULL;
_Bool var_4 = (_Bool)0;
int var_5 = 1852826343;
int var_7 = -249132281;
unsigned short var_8 = (unsigned short)30952;
unsigned long long int var_10 = 16766063703300127733ULL;
signed char var_11 = (signed char)38;
int zero = 0;
signed char var_14 = (signed char)-65;
short var_15 = (short)-14551;
unsigned short var_16 = (unsigned short)22760;
unsigned short var_17 = (unsigned short)48976;
void init() {
}

void checksum() {
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
