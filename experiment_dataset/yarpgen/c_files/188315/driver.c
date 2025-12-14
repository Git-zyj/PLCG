#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
long long int var_2 = -173964073146380110LL;
short var_4 = (short)-26171;
unsigned char var_5 = (unsigned char)209;
int var_6 = -1750936819;
unsigned short var_7 = (unsigned short)39693;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)93;
unsigned short var_11 = (unsigned short)11318;
unsigned short var_13 = (unsigned short)48411;
int zero = 0;
long long int var_14 = -692170739373973495LL;
short var_15 = (short)-23532;
unsigned short var_16 = (unsigned short)62846;
short var_17 = (short)28475;
unsigned long long int var_18 = 2451237113278720705ULL;
signed char arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)116;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
