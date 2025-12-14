#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 362870976677515117ULL;
unsigned short var_1 = (unsigned short)14521;
short var_2 = (short)-6513;
unsigned int var_3 = 1374504284U;
unsigned char var_4 = (unsigned char)136;
long long int var_5 = 6497448443437264750LL;
unsigned long long int var_6 = 2225918572043276600ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 120609715U;
short var_12 = (short)17229;
unsigned short var_13 = (unsigned short)45223;
int zero = 0;
unsigned long long int var_14 = 17812325738422859745ULL;
unsigned char var_15 = (unsigned char)124;
unsigned char var_16 = (unsigned char)211;
unsigned long long int var_17 = 15536079395295839994ULL;
long long int var_18 = 8123277926084166512LL;
_Bool var_19 = (_Bool)0;
short arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned char arr_2 [19] ;
unsigned char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-12297;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)162;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
