#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
int var_2 = 730168777;
long long int var_3 = 8579828642594060794LL;
unsigned short var_4 = (unsigned short)2008;
unsigned char var_6 = (unsigned char)57;
short var_8 = (short)5889;
_Bool var_10 = (_Bool)1;
long long int var_12 = 3467620866507369492LL;
unsigned short var_13 = (unsigned short)35455;
int var_14 = 2035257366;
int zero = 0;
unsigned char var_15 = (unsigned char)184;
signed char var_16 = (signed char)-71;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)35475;
unsigned long long int var_19 = 10534357690812728235ULL;
unsigned short var_20 = (unsigned short)14154;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 14500863678014059938ULL;
int var_23 = -180106260;
signed char var_24 = (signed char)-101;
short var_25 = (short)21297;
unsigned long long int var_26 = 7408683422667557092ULL;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] ;
_Bool arr_5 [13] [13] ;
short arr_6 [13] ;
signed char arr_22 [20] ;
unsigned long long int arr_24 [20] ;
long long int arr_25 [20] [20] [20] ;
long long int arr_30 [20] [20] [20] [20] [20] [20] ;
unsigned short arr_31 [20] ;
short arr_8 [13] ;
unsigned char arr_9 [13] [13] ;
signed char arr_21 [13] [13] [13] ;
unsigned char arr_32 [20] [20] [20] [20] ;
long long int arr_33 [20] [20] ;
unsigned short arr_34 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)2215;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = 4755550259006182749ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 7224489256663340889LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2108347086142946150LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (unsigned short)5052;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)3927 : (short)-22263;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)20 : (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)245 : (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? -6413837265212130698LL : -5972018476366305075LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = (unsigned short)62218;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
