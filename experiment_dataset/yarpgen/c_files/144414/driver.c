#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8532644352504358294ULL;
unsigned int var_1 = 4249439574U;
unsigned char var_2 = (unsigned char)62;
short var_3 = (short)-21130;
signed char var_5 = (signed char)86;
short var_8 = (short)29987;
unsigned long long int var_10 = 15377113945615631906ULL;
long long int var_12 = 9054220970002715281LL;
unsigned char var_15 = (unsigned char)91;
unsigned int var_17 = 3638752700U;
int zero = 0;
unsigned long long int var_19 = 10253993723085868306ULL;
unsigned char var_20 = (unsigned char)111;
unsigned long long int var_21 = 1214113209237388718ULL;
int var_22 = 1217052912;
short var_23 = (short)-9484;
long long int var_24 = -1254235300487379260LL;
unsigned char var_25 = (unsigned char)136;
unsigned short var_26 = (unsigned short)43669;
unsigned short var_27 = (unsigned short)35521;
short arr_0 [17] ;
short arr_1 [17] ;
unsigned char arr_3 [25] ;
_Bool arr_4 [25] [25] ;
int arr_7 [11] ;
unsigned long long int arr_5 [25] ;
unsigned int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-19450;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)10729 : (short)-11146;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -452247519;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 17749956777460637781ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 1060604019U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
