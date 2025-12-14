#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
unsigned short var_6 = (unsigned short)44655;
unsigned short var_12 = (unsigned short)50325;
short var_15 = (short)2693;
int zero = 0;
short var_16 = (short)9073;
unsigned short var_17 = (unsigned short)50364;
_Bool var_18 = (_Bool)0;
short var_19 = (short)26617;
_Bool var_20 = (_Bool)1;
unsigned char arr_0 [12] ;
unsigned short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)53313;
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
