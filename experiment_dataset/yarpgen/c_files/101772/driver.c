#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63002;
unsigned int var_1 = 1929496052U;
short var_2 = (short)28065;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)135;
unsigned int var_5 = 2138814318U;
int var_7 = 902516034;
unsigned int var_8 = 642049667U;
unsigned char var_9 = (unsigned char)161;
long long int var_11 = -6454802189359716255LL;
short var_12 = (short)-16457;
short var_14 = (short)-26828;
int zero = 0;
short var_15 = (short)15461;
unsigned int var_16 = 431589674U;
unsigned char var_17 = (unsigned char)16;
int var_18 = -587751547;
short var_19 = (short)15036;
unsigned int var_20 = 2030871310U;
unsigned short var_21 = (unsigned short)60409;
unsigned int var_22 = 2051305018U;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 342008308346349052ULL;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)106;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)8487;
signed char var_29 = (signed char)115;
int var_30 = 689643960;
unsigned int arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
_Bool arr_4 [10] [10] ;
unsigned short arr_6 [10] ;
signed char arr_8 [22] ;
unsigned char arr_9 [22] [22] ;
unsigned int arr_10 [22] ;
unsigned int arr_11 [22] ;
unsigned int arr_12 [22] [22] [22] ;
long long int arr_15 [22] ;
signed char arr_16 [22] ;
signed char arr_17 [22] ;
short arr_21 [22] [22] ;
short arr_3 [11] ;
unsigned long long int arr_7 [10] [10] ;
unsigned char arr_13 [22] [22] [22] ;
unsigned int arr_14 [22] ;
int arr_20 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3041865877U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 13254013459206638095ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)29582;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50169 : (unsigned short)35023;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 1764491960U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 731634809U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1866853388U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 2653743761025474211LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)17432 : (short)-6992;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-22220;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1601159551903221141ULL : 13153880839529642117ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 2766916064U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = -1272985308;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
