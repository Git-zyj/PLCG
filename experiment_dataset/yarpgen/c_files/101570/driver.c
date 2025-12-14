#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23858;
short var_2 = (short)14470;
unsigned char var_5 = (unsigned char)109;
signed char var_6 = (signed char)-12;
long long int var_7 = -6391670010979012439LL;
signed char var_9 = (signed char)113;
short var_11 = (short)11086;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)16091;
int var_16 = 1306533328;
long long int var_17 = 1085014236472805567LL;
unsigned int var_18 = 2825309421U;
short var_19 = (short)-20074;
short var_20 = (short)21673;
unsigned long long int var_21 = 11591057716331199209ULL;
short var_22 = (short)-9089;
short var_23 = (short)-4560;
unsigned int var_24 = 1943527792U;
unsigned short var_25 = (unsigned short)4811;
_Bool var_26 = (_Bool)1;
short arr_0 [16] ;
long long int arr_1 [16] ;
_Bool arr_3 [16] [16] ;
short arr_4 [16] ;
unsigned char arr_5 [16] [16] ;
unsigned long long int arr_6 [16] ;
unsigned short arr_7 [16] [16] [16] ;
unsigned int arr_9 [16] ;
signed char arr_10 [16] [16] [16] ;
unsigned short arr_11 [16] ;
unsigned int arr_14 [12] ;
signed char arr_23 [16] [16] ;
short arr_24 [16] [16] ;
signed char arr_2 [16] ;
short arr_8 [16] [16] ;
unsigned int arr_12 [16] ;
signed char arr_16 [12] [12] ;
_Bool arr_19 [16] ;
signed char arr_26 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)26131 : (short)-28603;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6092656313139405452LL : -7850300400196889770LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)32675;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 8986404991115921585ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)39778 : (unsigned short)30540;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 2956305322U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)46738;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3717947099U : 1299180452U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-26714 : (short)-30419;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)24721 : (short)5569;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 1104251212U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)126 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (signed char)54 : (signed char)85;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
