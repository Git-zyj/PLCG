#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8001;
unsigned int var_2 = 2892745578U;
long long int var_3 = 445757344476317192LL;
unsigned char var_4 = (unsigned char)194;
unsigned int var_5 = 1188542248U;
_Bool var_6 = (_Bool)0;
int var_7 = -1261277913;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2822779604U;
signed char var_11 = (signed char)-24;
unsigned int var_12 = 3235450781U;
unsigned long long int var_13 = 5067028753364972876ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)1;
long long int var_17 = 6806419005808806029LL;
signed char var_18 = (signed char)52;
unsigned int var_19 = 3064180584U;
long long int var_20 = 7205315361250258635LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -7924440074087630443LL;
short var_23 = (short)17637;
unsigned char var_24 = (unsigned char)213;
unsigned int var_25 = 1953913511U;
signed char var_26 = (signed char)-127;
short var_27 = (short)13417;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 5177099712409700285ULL;
unsigned short var_30 = (unsigned short)62709;
unsigned char var_31 = (unsigned char)163;
_Bool var_32 = (_Bool)0;
unsigned int var_33 = 2572319715U;
unsigned char var_34 = (unsigned char)122;
_Bool arr_0 [21] [21] ;
short arr_1 [21] [21] ;
unsigned char arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
unsigned char arr_5 [21] ;
unsigned int arr_7 [21] [21] [21] ;
long long int arr_8 [21] ;
long long int arr_10 [21] ;
_Bool arr_11 [21] ;
unsigned char arr_25 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-14817;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3871692920U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)103 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2819646299U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -4796892560667523876LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 8405645045949445877LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)150 : (unsigned char)144;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
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
