#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1475364062;
int var_1 = 646744902;
unsigned char var_2 = (unsigned char)202;
unsigned char var_4 = (unsigned char)245;
long long int var_5 = -7809422842060163378LL;
int var_6 = 1225221371;
unsigned int var_7 = 1653234430U;
unsigned short var_8 = (unsigned short)1417;
int var_10 = 2118532725;
unsigned short var_12 = (unsigned short)25256;
int zero = 0;
unsigned char var_13 = (unsigned char)103;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)55117;
unsigned short arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned char arr_3 [12] ;
unsigned short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)59775;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2353930888579795427ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54341 : (unsigned short)58727;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)17 : (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)27131 : (unsigned short)50016;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
