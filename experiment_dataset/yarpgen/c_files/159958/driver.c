#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7444057042376526951LL;
long long int var_1 = -2963744038339731084LL;
int var_2 = 1870565690;
int var_3 = 2033068579;
unsigned char var_7 = (unsigned char)13;
unsigned long long int var_8 = 17746934988632827080ULL;
int var_11 = -607451618;
unsigned char var_12 = (unsigned char)43;
int var_13 = 1383153746;
int var_14 = 178268031;
int zero = 0;
short var_16 = (short)-30366;
unsigned char var_17 = (unsigned char)11;
unsigned short var_18 = (unsigned short)31349;
signed char var_19 = (signed char)102;
long long int arr_0 [11] ;
signed char arr_3 [12] ;
unsigned long long int arr_4 [12] ;
long long int arr_5 [12] ;
short arr_6 [12] ;
int arr_7 [12] ;
unsigned long long int arr_8 [12] ;
unsigned short arr_9 [12] ;
unsigned long long int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 798349544070938321LL : -4471310940375590502LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 5545012315319149684ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4826895670193831860LL : -7131293423893271777LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)1820;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2046190166 : 384401190;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 16764486865564108357ULL : 18270904984113602961ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58185 : (unsigned short)16621;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 3947230462439586397ULL : 6944449101752157331ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
