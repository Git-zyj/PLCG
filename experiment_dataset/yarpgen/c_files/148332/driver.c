#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63156;
long long int var_4 = 7818929492410974980LL;
short var_5 = (short)-13326;
unsigned long long int var_9 = 13657355551550874913ULL;
unsigned long long int var_10 = 17014713142325645336ULL;
unsigned short var_11 = (unsigned short)28176;
long long int var_12 = 5542447253493589791LL;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)55980;
unsigned short var_18 = (unsigned short)62129;
int var_19 = 1811160655;
long long int var_20 = -4935445562998308332LL;
unsigned char var_21 = (unsigned char)32;
unsigned short var_22 = (unsigned short)19233;
short var_23 = (short)-12023;
unsigned int arr_0 [13] ;
unsigned int arr_4 [13] ;
int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1058557582U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 554151515U : 2100528849U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 364222760 : -1479194908;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
