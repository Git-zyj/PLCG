#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6916664389908593547LL;
short var_2 = (short)28372;
unsigned short var_3 = (unsigned short)11393;
_Bool var_4 = (_Bool)0;
short var_6 = (short)5911;
short var_7 = (short)25206;
unsigned long long int var_8 = 5595675704491712359ULL;
short var_10 = (short)29023;
signed char var_11 = (signed char)24;
unsigned short var_12 = (unsigned short)40783;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5014835647619132155ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)253;
int var_19 = -1057115531;
int zero = 0;
short var_20 = (short)-2637;
long long int var_21 = -3756051094318311579LL;
unsigned char var_22 = (unsigned char)130;
int var_23 = -1526555588;
unsigned short var_24 = (unsigned short)50433;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)177;
unsigned long long int var_27 = 7222209038389450643ULL;
unsigned char var_28 = (unsigned char)223;
unsigned long long int var_29 = 8836185400621641059ULL;
_Bool var_30 = (_Bool)0;
int var_31 = 2142599345;
unsigned char var_32 = (unsigned char)245;
int arr_0 [12] ;
unsigned int arr_1 [12] ;
_Bool arr_3 [12] [12] ;
unsigned char arr_5 [12] [12] [12] ;
unsigned char arr_6 [12] [12] [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] ;
unsigned char arr_11 [12] [12] [12] ;
unsigned char arr_15 [12] [12] [12] [12] ;
unsigned char arr_16 [12] ;
unsigned long long int arr_10 [12] [12] ;
short arr_13 [12] [12] [12] ;
long long int arr_17 [12] [12] ;
unsigned long long int arr_23 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1312763080;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1303558289U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 154030228184553798ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)238 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)12 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 6618396824662097861ULL : 7666835749023502295ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)5063 : (short)-26505;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? -1663373229772244289LL : -6808126098682427778LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 14535238797292020376ULL : 1868310177695037562ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
