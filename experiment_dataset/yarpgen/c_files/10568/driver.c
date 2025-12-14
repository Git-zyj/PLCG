#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1402632795U;
unsigned char var_2 = (unsigned char)244;
unsigned char var_4 = (unsigned char)182;
unsigned long long int var_5 = 13544058276947320909ULL;
signed char var_6 = (signed char)32;
unsigned long long int var_8 = 9509218878858680678ULL;
unsigned short var_9 = (unsigned short)58662;
unsigned char var_10 = (unsigned char)110;
signed char var_11 = (signed char)101;
int zero = 0;
unsigned char var_12 = (unsigned char)175;
unsigned char var_13 = (unsigned char)157;
signed char var_14 = (signed char)-126;
short var_15 = (short)7866;
unsigned char var_16 = (unsigned char)125;
unsigned short var_17 = (unsigned short)39847;
unsigned char var_18 = (unsigned char)73;
short var_19 = (short)25568;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3965116176U;
unsigned char var_22 = (unsigned char)188;
signed char var_23 = (signed char)76;
int var_24 = -1200805128;
short var_25 = (short)-12961;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 429369378640568416ULL;
long long int var_28 = -3283080073091114075LL;
unsigned long long int var_29 = 1250330853883617979ULL;
unsigned char var_30 = (unsigned char)78;
long long int var_31 = 6267905249711922268LL;
unsigned long long int var_32 = 519648091067229552ULL;
unsigned int var_33 = 2559653996U;
int var_34 = -1269271420;
unsigned int arr_0 [25] [25] ;
signed char arr_1 [25] ;
signed char arr_2 [25] ;
short arr_5 [22] ;
int arr_6 [22] ;
unsigned long long int arr_7 [22] [22] [22] ;
_Bool arr_10 [22] [22] ;
int arr_17 [23] ;
int arr_18 [23] ;
unsigned long long int arr_19 [23] [23] ;
signed char arr_20 [23] [23] [23] ;
int arr_21 [23] ;
long long int arr_26 [23] [23] [23] [23] ;
signed char arr_27 [23] [23] [23] [23] ;
int arr_32 [24] ;
long long int arr_3 [25] ;
unsigned short arr_15 [22] [22] ;
unsigned short arr_16 [22] [22] ;
signed char arr_22 [23] [23] ;
unsigned short arr_25 [23] [23] [23] ;
_Bool arr_28 [23] ;
unsigned long long int arr_29 [23] ;
signed char arr_30 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 1872795635U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-15505;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -819188497;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 12896047706359011211ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = -371198722;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = -1213729325;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = 8709507800370380708ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = -764975958;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 8194111165172476572LL : -8302836542175054375LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = -182026357;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1233490090333048383LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)27564;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)25389;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)24891;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 9692434303802808798ULL : 18403413460731598550ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)-33;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
