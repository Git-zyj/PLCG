#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3486;
int var_1 = -1231178346;
int var_2 = -100359732;
signed char var_3 = (signed char)-51;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1537510210089179687ULL;
short var_6 = (short)26874;
unsigned char var_7 = (unsigned char)249;
unsigned short var_8 = (unsigned short)32001;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 9376980292209839204ULL;
signed char var_12 = (signed char)74;
unsigned char var_13 = (unsigned char)8;
signed char var_14 = (signed char)-67;
unsigned int var_15 = 1247861275U;
short var_16 = (short)-5911;
unsigned int var_17 = 2261913233U;
signed char var_18 = (signed char)-124;
unsigned long long int var_19 = 18099863059195047198ULL;
int zero = 0;
signed char var_20 = (signed char)2;
unsigned short var_21 = (unsigned short)26854;
int var_22 = -1430754270;
unsigned char var_23 = (unsigned char)166;
unsigned long long int var_24 = 5805709098796261786ULL;
unsigned int var_25 = 3049339370U;
int var_26 = 235527886;
unsigned short var_27 = (unsigned short)45080;
unsigned long long int var_28 = 7537735206735077000ULL;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)13532;
unsigned char var_31 = (unsigned char)97;
short var_32 = (short)8536;
unsigned int var_33 = 3997614208U;
_Bool var_34 = (_Bool)0;
short var_35 = (short)24499;
int var_36 = 1125912502;
unsigned int var_37 = 2391722606U;
unsigned long long int var_38 = 12601009279446573957ULL;
_Bool var_39 = (_Bool)1;
unsigned int arr_13 [21] [21] [21] ;
int arr_14 [21] [21] [21] ;
int arr_18 [21] [21] [21] [21] ;
unsigned long long int arr_19 [21] [21] [21] ;
signed char arr_22 [21] ;
int arr_28 [21] [21] ;
unsigned int arr_29 [21] [21] [21] [21] ;
unsigned int arr_34 [21] [21] [21] ;
unsigned char arr_35 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3071806553U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -721003446;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1482504348 : -32623056;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 15841709675230276218ULL : 12968295641223538907ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)4;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? -1107601071 : -326009784;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2547866219U : 651701823U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1769229938U : 1447404323U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned char)24;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
