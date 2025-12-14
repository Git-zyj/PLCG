#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27866;
unsigned long long int var_3 = 18107917971263389181ULL;
short var_4 = (short)11182;
short var_5 = (short)12625;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_15 = (short)403;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-116;
unsigned short var_18 = (unsigned short)36855;
unsigned int var_19 = 2699024147U;
int var_20 = -2118713604;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-31011;
signed char var_24 = (signed char)-117;
unsigned int var_25 = 3252545413U;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)190;
unsigned char var_28 = (unsigned char)211;
unsigned short var_29 = (unsigned short)52817;
_Bool var_30 = (_Bool)0;
_Bool arr_0 [22] ;
signed char arr_2 [22] [22] ;
short arr_4 [20] ;
unsigned char arr_5 [20] [20] ;
unsigned long long int arr_6 [20] [20] ;
unsigned char arr_7 [20] ;
int arr_8 [20] [20] ;
_Bool arr_9 [20] [20] ;
signed char arr_11 [20] [20] ;
unsigned short arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-30410;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 10268745246441096616ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 252758396 : -892772801;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)109 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)40012 : (unsigned short)26371;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
