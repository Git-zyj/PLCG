#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
long long int var_1 = 7038593087239532822LL;
signed char var_2 = (signed char)-93;
signed char var_3 = (signed char)-30;
unsigned int var_4 = 2864551122U;
unsigned long long int var_5 = 16535723592880637672ULL;
unsigned char var_6 = (unsigned char)202;
_Bool var_7 = (_Bool)0;
long long int var_8 = 7497871040812405163LL;
unsigned long long int var_9 = 8476621888676356716ULL;
unsigned short var_10 = (unsigned short)14944;
long long int var_11 = -2963372067462094770LL;
unsigned int var_12 = 3487632049U;
int zero = 0;
unsigned int var_13 = 1208707915U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2512303760812952153LL;
short var_16 = (short)-131;
unsigned short var_17 = (unsigned short)39946;
int var_18 = 1576784660;
unsigned char var_19 = (unsigned char)107;
unsigned long long int var_20 = 16486385712803380825ULL;
signed char var_21 = (signed char)97;
unsigned int var_22 = 1564433792U;
long long int var_23 = 4859853203067326417LL;
unsigned long long int var_24 = 11935483710616546865ULL;
long long int var_25 = -2811626544748115423LL;
unsigned int var_26 = 4252799025U;
signed char var_27 = (signed char)46;
int var_28 = 1113598986;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 5944968770299381324ULL;
long long int var_31 = 7983010352655991028LL;
unsigned char var_32 = (unsigned char)152;
unsigned long long int var_33 = 6016824561693824987ULL;
short var_34 = (short)26481;
long long int var_35 = -4744789979863513842LL;
_Bool var_36 = (_Bool)0;
short var_37 = (short)-25243;
long long int var_38 = 7677454140461630727LL;
int var_39 = -1512066295;
int var_40 = 380671558;
long long int var_41 = -2880431033976689784LL;
unsigned long long int var_42 = 8243324052765488961ULL;
unsigned int arr_14 [12] ;
unsigned long long int arr_19 [12] [12] [12] [12] [12] ;
long long int arr_26 [12] [12] [12] [12] [12] [12] [12] ;
long long int arr_41 [12] [12] [12] [12] ;
unsigned int arr_58 [12] ;
long long int arr_61 [12] ;
signed char arr_64 [12] [12] ;
short arr_67 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 322520372U : 1669404297U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 12274159575624715035ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 5545757653809326879LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 4283443268483890694LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_58 [i_0] = 4221273502U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_61 [i_0] = -4012508605114839652LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_64 [i_0] [i_1] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_67 [i_0] = (short)8393;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_61 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_64 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_67 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
