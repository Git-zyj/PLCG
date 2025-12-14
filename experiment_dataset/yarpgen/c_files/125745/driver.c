#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29815;
long long int var_1 = 5669930530382222506LL;
short var_2 = (short)21678;
unsigned short var_3 = (unsigned short)19084;
int var_4 = -1765692865;
short var_6 = (short)14172;
unsigned int var_9 = 513051537U;
unsigned char var_14 = (unsigned char)25;
unsigned int var_17 = 158222924U;
unsigned int var_18 = 2005180609U;
int zero = 0;
unsigned int var_19 = 84350827U;
unsigned short var_20 = (unsigned short)32952;
unsigned short var_21 = (unsigned short)41871;
unsigned short var_22 = (unsigned short)7564;
unsigned char var_23 = (unsigned char)1;
unsigned char var_24 = (unsigned char)24;
signed char arr_0 [14] ;
short arr_2 [14] [14] ;
long long int arr_5 [12] ;
int arr_6 [12] [12] ;
_Bool arr_3 [14] ;
unsigned int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-27917;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -6653641937372591758LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 1199311536;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 615660615U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
