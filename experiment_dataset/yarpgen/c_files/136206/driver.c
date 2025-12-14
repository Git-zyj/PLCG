#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)241;
int var_2 = 598951340;
unsigned char var_3 = (unsigned char)195;
unsigned char var_5 = (unsigned char)123;
int var_6 = 1430502576;
int var_7 = 360973349;
unsigned char var_9 = (unsigned char)191;
int var_11 = -1902484437;
long long int var_12 = 3928752902293065767LL;
unsigned char var_13 = (unsigned char)255;
unsigned long long int var_14 = 14425915291087846422ULL;
int var_15 = -2110454784;
signed char var_16 = (signed char)76;
signed char var_17 = (signed char)-43;
unsigned int var_18 = 3476544922U;
unsigned int var_19 = 3630378032U;
int zero = 0;
short var_20 = (short)9551;
unsigned short var_21 = (unsigned short)46489;
unsigned int var_22 = 2008986181U;
unsigned int var_23 = 1193943141U;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
long long int var_26 = 4828174623953713909LL;
short var_27 = (short)-7297;
int var_28 = -800411285;
int var_29 = 213175473;
short var_30 = (short)-6890;
int var_31 = 200373064;
long long int var_32 = -2822159564644052216LL;
unsigned int var_33 = 359028031U;
unsigned short var_34 = (unsigned short)11897;
unsigned long long int var_35 = 6469323114311094606ULL;
long long int arr_0 [16] ;
int arr_1 [16] ;
signed char arr_2 [16] ;
unsigned char arr_3 [16] [16] ;
int arr_4 [16] [16] ;
int arr_5 [16] [16] ;
unsigned int arr_6 [16] ;
unsigned char arr_7 [16] ;
unsigned char arr_10 [16] ;
unsigned char arr_12 [16] [16] [16] [16] [16] [16] ;
short arr_13 [16] [16] [16] [16] [16] [16] [16] ;
signed char arr_15 [16] [16] [16] [16] [16] ;
int arr_16 [16] [16] [16] [16] ;
short arr_17 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_20 [24] ;
_Bool arr_21 [24] ;
long long int arr_22 [24] [24] ;
int arr_23 [24] ;
short arr_24 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6692888838854339125LL : -8623518797886471019LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1630009052 : 1203097084;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -753426405;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -1574948714;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1997191650U : 2380091171U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)30909;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)118 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 388955738 : -807021790;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)-9102 : (short)30809;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 381478880U : 1474761915U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? -856053632622779914LL : 552692739149204175LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 2019509626 : -1486206487;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (short)-2185 : (short)-9171;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
