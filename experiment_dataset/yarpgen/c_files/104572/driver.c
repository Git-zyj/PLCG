#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65320;
signed char var_1 = (signed char)-98;
unsigned short var_2 = (unsigned short)43124;
short var_3 = (short)2008;
int var_4 = 1918363869;
unsigned char var_5 = (unsigned char)79;
signed char var_6 = (signed char)52;
unsigned long long int var_7 = 6976895144330834684ULL;
signed char var_8 = (signed char)-125;
unsigned char var_9 = (unsigned char)148;
long long int var_10 = 2635480206504934984LL;
int zero = 0;
int var_11 = -1515167001;
unsigned short var_12 = (unsigned short)54339;
_Bool var_13 = (_Bool)0;
int var_14 = 1458347846;
int var_15 = 654890297;
int var_16 = -1114801625;
unsigned int var_17 = 4212884713U;
signed char var_18 = (signed char)78;
unsigned long long int var_19 = 6534164856233406338ULL;
unsigned char var_20 = (unsigned char)252;
unsigned char var_21 = (unsigned char)13;
unsigned long long int var_22 = 569623079624867413ULL;
_Bool var_23 = (_Bool)0;
long long int var_24 = -5084507763788159466LL;
short var_25 = (short)7182;
signed char var_26 = (signed char)-99;
unsigned char var_27 = (unsigned char)40;
unsigned short var_28 = (unsigned short)17102;
short arr_0 [11] ;
_Bool arr_2 [11] ;
int arr_3 [11] [11] ;
unsigned char arr_5 [11] [11] [11] ;
long long int arr_6 [11] ;
_Bool arr_8 [11] [11] [11] ;
short arr_9 [11] [11] [11] [11] ;
unsigned short arr_11 [11] [11] ;
int arr_14 [11] [11] ;
unsigned long long int arr_17 [11] ;
int arr_19 [11] [11] [11] ;
signed char arr_21 [11] [11] [11] [11] ;
unsigned long long int arr_22 [11] [11] [11] [11] ;
unsigned short arr_23 [11] [11] ;
unsigned char arr_25 [11] [11] [11] [11] ;
unsigned long long int arr_4 [11] ;
int arr_29 [11] [11] ;
unsigned long long int arr_34 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)30637;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -1511532405;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 6035033945570353254LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-2948;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)37006;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = 727585815;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 3459954032115096717ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = -625430485;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 9093258844383103161ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)9406;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1915194507742961089ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = 1566451979;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? 2297551958591880701ULL : 7675745222003774844ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
