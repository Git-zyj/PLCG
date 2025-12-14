#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28309;
short var_1 = (short)-8425;
unsigned int var_3 = 3085161576U;
unsigned short var_4 = (unsigned short)33071;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)61579;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)188;
int zero = 0;
unsigned long long int var_12 = 9140056232579369330ULL;
unsigned int var_13 = 838242377U;
unsigned int var_14 = 594305250U;
unsigned short arr_0 [12] ;
unsigned short arr_2 [12] ;
unsigned long long int arr_4 [12] ;
unsigned char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)38615;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)12305;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1733189533489398901ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)218;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
