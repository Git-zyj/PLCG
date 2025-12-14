#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
int var_7 = -1539926489;
long long int var_8 = 4943422599565940381LL;
unsigned char var_9 = (unsigned char)212;
unsigned int var_10 = 1929610800U;
int var_11 = -1547374516;
signed char var_12 = (signed char)-71;
signed char var_13 = (signed char)27;
short var_15 = (short)-9731;
int zero = 0;
signed char var_16 = (signed char)125;
signed char var_17 = (signed char)70;
unsigned long long int var_18 = 2396170280408590800ULL;
unsigned long long int var_19 = 1874997714733049614ULL;
short var_20 = (short)21173;
int var_21 = 90679966;
unsigned short var_22 = (unsigned short)65085;
long long int var_23 = 6076654848121041623LL;
unsigned int var_24 = 518478210U;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
long long int var_27 = 5331731419845165432LL;
unsigned int var_28 = 2716437177U;
unsigned char var_29 = (unsigned char)117;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)22191;
unsigned short var_32 = (unsigned short)31242;
unsigned int arr_0 [16] ;
int arr_1 [16] ;
unsigned short arr_2 [16] ;
long long int arr_3 [16] ;
_Bool arr_4 [16] ;
unsigned char arr_8 [16] [16] ;
unsigned short arr_12 [16] ;
unsigned long long int arr_13 [16] ;
long long int arr_15 [16] [16] ;
unsigned short arr_17 [16] [16] [16] ;
_Bool arr_18 [16] ;
short arr_20 [16] ;
long long int arr_25 [15] ;
short arr_32 [15] [15] [15] ;
unsigned char arr_36 [15] [15] [15] ;
signed char arr_5 [16] [16] ;
int arr_6 [16] [16] [16] ;
_Bool arr_7 [16] [16] [16] ;
unsigned long long int arr_11 [16] [16] [16] ;
_Bool arr_16 [16] ;
unsigned char arr_21 [16] ;
int arr_22 [16] [16] [16] ;
short arr_23 [16] [16] ;
long long int arr_30 [15] ;
_Bool arr_34 [15] [15] [15] ;
long long int arr_39 [15] [15] ;
unsigned int arr_42 [14] ;
short arr_43 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2648859002U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -456522961;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)24798;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -3285634118933534495LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)58288;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 8935698467505563167ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 5051915473125986910LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)54732;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (short)-24452;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 8225705638496335896LL : 1208628206892467847LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (short)21358;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)104 : (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)79 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 171409850 : 1936369481;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11801339398898414511ULL : 5440841724582543617ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 993886177;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (short)14923;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 2646941193644306271LL : -6493394381237046810LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_39 [i_0] [i_1] = (i_1 % 2 == 0) ? -1153994447575154960LL : -2396462206629724003LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_42 [i_0] = 1157683737U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = (short)-30334;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
