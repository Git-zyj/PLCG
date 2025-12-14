#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned long long int var_1 = 15475884775410481857ULL;
unsigned char var_2 = (unsigned char)70;
unsigned char var_4 = (unsigned char)153;
unsigned long long int var_6 = 14290960696873060345ULL;
unsigned char var_7 = (unsigned char)153;
signed char var_8 = (signed char)-78;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)245;
unsigned long long int var_12 = 10402007909743023447ULL;
int var_14 = -605177280;
int zero = 0;
int var_15 = -1317127308;
unsigned long long int var_16 = 5360949457780417107ULL;
unsigned char var_17 = (unsigned char)127;
unsigned char var_18 = (unsigned char)165;
unsigned long long int var_19 = 6989913822915247985ULL;
signed char var_20 = (signed char)-24;
unsigned long long int var_21 = 6065251787959518740ULL;
unsigned long long int var_22 = 10520807701597374206ULL;
unsigned char var_23 = (unsigned char)172;
unsigned char var_24 = (unsigned char)226;
unsigned long long int var_25 = 7137458769151169527ULL;
signed char var_26 = (signed char)-24;
unsigned char var_27 = (unsigned char)131;
unsigned char var_28 = (unsigned char)68;
unsigned char var_29 = (unsigned char)59;
_Bool var_30 = (_Bool)1;
unsigned long long int var_31 = 6263968352632135269ULL;
unsigned long long int var_32 = 10742501049937735779ULL;
unsigned long long int var_33 = 18420480758346758219ULL;
_Bool var_34 = (_Bool)1;
_Bool arr_0 [17] [17] ;
_Bool arr_1 [17] ;
unsigned long long int arr_3 [19] [19] ;
unsigned long long int arr_4 [19] ;
int arr_5 [19] ;
unsigned char arr_7 [19] ;
_Bool arr_8 [19] [19] ;
unsigned long long int arr_10 [17] [17] ;
unsigned long long int arr_12 [17] ;
unsigned long long int arr_13 [17] [17] ;
signed char arr_18 [17] [17] [17] [17] [17] ;
_Bool arr_20 [17] [17] ;
unsigned long long int arr_25 [17] ;
_Bool arr_27 [16] ;
unsigned long long int arr_33 [16] [16] [16] ;
_Bool arr_6 [19] ;
unsigned char arr_15 [17] ;
signed char arr_21 [17] [17] [17] [17] ;
signed char arr_24 [17] [17] [17] ;
unsigned char arr_29 [16] ;
unsigned long long int arr_37 [16] [16] [16] ;
unsigned long long int arr_38 [16] [16] [16] ;
signed char arr_39 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 17047070066656876968ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 16755836199258720430ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -1768051511;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 13195008204719286598ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 1757708825924275073ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = 10211129930358084180ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)3 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = 13956609880545435173ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 14342000795420563482ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)7 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-95 : (signed char)26;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 17420161958109984356ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 14163666377091340429ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_39 [i_0] = (signed char)-107;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
