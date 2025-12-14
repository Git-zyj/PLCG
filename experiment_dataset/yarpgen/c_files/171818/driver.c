#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15367756411666227715ULL;
unsigned int var_2 = 2669142644U;
int var_4 = -1093026415;
_Bool var_5 = (_Bool)0;
long long int var_6 = -2288590533803885524LL;
unsigned int var_7 = 1009375576U;
signed char var_8 = (signed char)-22;
signed char var_11 = (signed char)70;
unsigned short var_12 = (unsigned short)1754;
long long int var_13 = 4624390889867563558LL;
unsigned char var_14 = (unsigned char)120;
long long int var_15 = -1522445568222614135LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)18023;
short var_19 = (short)-2233;
short var_20 = (short)-15197;
unsigned int var_21 = 560300473U;
signed char var_22 = (signed char)-46;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 838078176U;
long long int var_25 = 7703914312925804179LL;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-32426;
long long int var_28 = -5638264786993048246LL;
unsigned char var_29 = (unsigned char)14;
signed char var_30 = (signed char)-42;
int var_31 = -902583105;
signed char var_32 = (signed char)97;
_Bool var_33 = (_Bool)1;
long long int var_34 = -3670356487227988027LL;
long long int arr_2 [11] ;
int arr_3 [16] [16] ;
int arr_4 [16] ;
short arr_5 [16] [16] [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
unsigned char arr_7 [16] ;
_Bool arr_10 [16] [16] [16] ;
short arr_12 [16] [16] [16] [16] ;
signed char arr_13 [16] [16] [16] [16] ;
unsigned char arr_20 [16] [16] [16] ;
unsigned char arr_25 [19] [19] ;
unsigned int arr_28 [19] ;
unsigned long long int arr_8 [16] ;
short arr_11 [16] [16] ;
short arr_16 [16] ;
_Bool arr_21 [16] [16] ;
int arr_22 [16] [16] ;
int arr_29 [19] ;
signed char arr_30 [19] ;
unsigned char arr_31 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1517389025142228181LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -1027117307;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -928188778 : 1582050077;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)12057;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2089934651992499628ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)-5045;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-116 : (signed char)-72;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = 3935646323U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 960373159405535828ULL : 8110229393715148799ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-15883 : (short)-14578;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)2408 : (short)-22417;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 1124202393 : -1780881016;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 1020960612;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (unsigned char)217;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
