#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1296477720;
unsigned long long int var_7 = 5205097907019315850ULL;
unsigned char var_9 = (unsigned char)173;
unsigned short var_13 = (unsigned short)58704;
short var_15 = (short)1288;
unsigned long long int var_17 = 15381210534359926798ULL;
int zero = 0;
signed char var_20 = (signed char)-81;
signed char var_21 = (signed char)17;
long long int var_22 = 2130012880901549578LL;
long long int var_23 = -7238826387599442570LL;
long long int var_24 = 7151825642951227725LL;
unsigned long long int var_25 = 17914980368801775093ULL;
unsigned short var_26 = (unsigned short)11068;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)21270;
unsigned int var_29 = 1376963208U;
short var_30 = (short)-22912;
unsigned char var_31 = (unsigned char)184;
_Bool var_32 = (_Bool)1;
unsigned char var_33 = (unsigned char)82;
int var_34 = -898746813;
int var_35 = 1359382476;
short arr_0 [14] ;
signed char arr_1 [14] ;
_Bool arr_3 [14] ;
signed char arr_5 [14] [14] [14] ;
signed char arr_6 [14] ;
unsigned short arr_16 [14] [14] [14] [14] ;
unsigned long long int arr_25 [24] ;
short arr_7 [14] ;
unsigned char arr_17 [14] ;
unsigned char arr_20 [10] ;
_Bool arr_23 [21] ;
long long int arr_27 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)32394;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)40258 : (unsigned short)3682;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = 8044705871297042303ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)8265;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)150 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -391185458949281538LL : 8693164002910820032LL;
}

void checksum() {
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
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
