#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8112;
unsigned char var_1 = (unsigned char)84;
unsigned long long int var_2 = 32516683531787636ULL;
signed char var_3 = (signed char)90;
unsigned char var_4 = (unsigned char)214;
short var_6 = (short)-17970;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-116;
short var_10 = (short)-19014;
unsigned short var_11 = (unsigned short)48493;
signed char var_12 = (signed char)-23;
int zero = 0;
long long int var_13 = 3430215664010747939LL;
int var_14 = 654938841;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-80;
unsigned long long int var_17 = 2316706076591782355ULL;
short var_18 = (short)19573;
long long int var_19 = -159890489860810517LL;
unsigned long long int var_20 = 10185550573744674213ULL;
long long int var_21 = -6035881596827911756LL;
unsigned long long int var_22 = 4614108963595227782ULL;
long long int var_23 = 1097980980602622615LL;
unsigned long long int var_24 = 18398638756167230285ULL;
unsigned int var_25 = 145253703U;
unsigned char var_26 = (unsigned char)197;
unsigned short var_27 = (unsigned short)14443;
unsigned long long int var_28 = 13123337555096013944ULL;
long long int var_29 = 6940508520631343966LL;
signed char var_30 = (signed char)27;
signed char var_31 = (signed char)78;
signed char var_32 = (signed char)-83;
signed char var_33 = (signed char)-2;
_Bool arr_4 [19] [19] ;
unsigned long long int arr_8 [19] ;
unsigned short arr_9 [19] [19] [19] ;
unsigned long long int arr_18 [24] ;
unsigned long long int arr_20 [25] ;
unsigned long long int arr_25 [25] [25] ;
int arr_26 [25] [25] [25] ;
unsigned char arr_34 [21] [21] ;
int arr_3 [16] [16] ;
int arr_6 [19] ;
unsigned long long int arr_15 [15] [15] ;
unsigned long long int arr_19 [24] ;
short arr_27 [25] ;
unsigned char arr_31 [12] [12] ;
unsigned short arr_39 [21] ;
short arr_40 [21] ;
unsigned char arr_43 [21] [21] [21] ;
unsigned short arr_44 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 5563855772915506026ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)57196;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 13921812401716406129ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 13547442189195483195ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? 15499631932271872242ULL : 13200093097766551407ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -1011805270;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1868388877;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2028113488;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 8242087933672091250ULL : 10663394902816093657ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 17737648163114103190ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (short)-4853 : (short)-20248;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)126 : (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_39 [i_0] = (unsigned short)18934;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_40 [i_0] = (short)12252;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)237 : (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)22523 : (unsigned short)64085;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
