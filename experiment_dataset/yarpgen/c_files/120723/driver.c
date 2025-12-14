#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
short var_3 = (short)-16371;
short var_4 = (short)-20712;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 12550876235911828499ULL;
unsigned long long int var_11 = 15823929859266142320ULL;
short var_12 = (short)3068;
int zero = 0;
unsigned char var_14 = (unsigned char)173;
_Bool var_15 = (_Bool)0;
short var_16 = (short)23009;
unsigned long long int var_17 = 1312844283408206214ULL;
unsigned int var_18 = 3182483275U;
long long int var_19 = 3634652174662928644LL;
unsigned int var_20 = 3332805887U;
unsigned int var_21 = 3488366144U;
unsigned int var_22 = 4129102434U;
unsigned long long int var_23 = 8041298979776242579ULL;
short var_24 = (short)275;
unsigned short var_25 = (unsigned short)33476;
unsigned int var_26 = 4228192723U;
unsigned short var_27 = (unsigned short)8951;
unsigned char var_28 = (unsigned char)0;
unsigned long long int var_29 = 11790883424048183416ULL;
unsigned char var_30 = (unsigned char)211;
unsigned char var_31 = (unsigned char)167;
unsigned char arr_0 [10] ;
unsigned short arr_1 [10] ;
long long int arr_2 [10] [10] ;
long long int arr_6 [10] [10] [10] ;
unsigned char arr_8 [10] [10] [10] [10] ;
unsigned short arr_9 [10] [10] [10] [10] [10] ;
unsigned char arr_10 [10] [10] [10] [10] ;
_Bool arr_12 [10] ;
unsigned short arr_15 [25] ;
unsigned long long int arr_16 [25] ;
unsigned long long int arr_17 [21] [21] ;
unsigned short arr_18 [21] ;
unsigned short arr_23 [21] ;
signed char arr_14 [10] ;
unsigned char arr_25 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)27109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 6180020094631064429LL : 9199588092870545171LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -5318719809297788775LL : -7024222461037627254LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)11 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)55127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)255 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned short)18729;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 15989123580862302706ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = 7033451410797419786ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (unsigned short)45714;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (unsigned short)916;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)32;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
