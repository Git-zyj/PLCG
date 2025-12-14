#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
unsigned short var_6 = (unsigned short)62120;
unsigned long long int var_7 = 15464298063191148192ULL;
unsigned int var_13 = 4162154175U;
int zero = 0;
unsigned short var_18 = (unsigned short)23857;
short var_19 = (short)-28882;
long long int var_20 = -5781999836217252945LL;
_Bool var_21 = (_Bool)0;
unsigned char arr_0 [19] ;
long long int arr_1 [19] ;
signed char arr_5 [12] ;
short arr_3 [19] ;
signed char arr_7 [12] ;
int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 6220255183096312614LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-2946;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = -1874863228;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
