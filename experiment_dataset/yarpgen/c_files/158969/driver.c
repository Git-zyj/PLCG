#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3914038034865468358LL;
unsigned short var_4 = (unsigned short)30653;
unsigned char var_5 = (unsigned char)243;
long long int var_6 = 441674661391838LL;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)174;
signed char var_12 = (signed char)13;
long long int var_13 = 257398831656801749LL;
long long int var_14 = 7346786267054613076LL;
long long int var_17 = 8805342466476407489LL;
short var_18 = (short)20732;
int zero = 0;
short var_19 = (short)23831;
unsigned long long int var_20 = 8088047532569463324ULL;
unsigned long long int var_21 = 4931229471022020963ULL;
void init() {
}

void checksum() {
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
