#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23379;
signed char var_1 = (signed char)-5;
unsigned long long int var_2 = 4172558950307705010ULL;
int var_3 = 744777146;
unsigned int var_4 = 3092448668U;
unsigned short var_5 = (unsigned short)6485;
long long int var_6 = 471735273277912147LL;
long long int var_7 = -3140486790723546452LL;
int var_8 = 1447472175;
unsigned int var_9 = 325757628U;
unsigned short var_10 = (unsigned short)39132;
int zero = 0;
signed char var_11 = (signed char)-33;
short var_12 = (short)-17386;
short var_13 = (short)5229;
long long int var_14 = -2076224279635259112LL;
long long int var_15 = -8633184895063944528LL;
unsigned int var_16 = 2939477567U;
unsigned short var_17 = (unsigned short)52824;
unsigned char var_18 = (unsigned char)188;
unsigned short var_19 = (unsigned short)58524;
short var_20 = (short)-28412;
unsigned long long int var_21 = 3280315493024979585ULL;
short var_22 = (short)22677;
long long int var_23 = -1824661583978733148LL;
long long int var_24 = -7980567477514868LL;
unsigned long long int var_25 = 6432219106393573165ULL;
short var_26 = (short)20338;
unsigned long long int var_27 = 2042413376342505203ULL;
unsigned int var_28 = 3010874786U;
unsigned short var_29 = (unsigned short)50801;
unsigned long long int var_30 = 16400663376635414898ULL;
unsigned short var_31 = (unsigned short)1821;
signed char var_32 = (signed char)0;
long long int var_33 = 9948980187515952LL;
_Bool var_34 = (_Bool)0;
long long int var_35 = -736596480603674294LL;
unsigned char var_36 = (unsigned char)135;
signed char var_37 = (signed char)-96;
signed char var_38 = (signed char)40;
signed char var_39 = (signed char)52;
signed char var_40 = (signed char)84;
long long int var_41 = 4111669327257443296LL;
short var_42 = (short)27786;
short var_43 = (short)-16853;
signed char var_44 = (signed char)-127;
int var_45 = 1518011607;
int var_46 = 613134806;
short var_47 = (short)-10936;
unsigned short var_48 = (unsigned short)48126;
signed char var_49 = (signed char)121;
long long int var_50 = -1221151455573826639LL;
long long int var_51 = -7144802260359951657LL;
unsigned long long int var_52 = 7087091699135788076ULL;
signed char var_53 = (signed char)-38;
unsigned short arr_2 [19] [19] ;
long long int arr_4 [19] [19] ;
short arr_5 [19] ;
unsigned long long int arr_10 [19] [19] [19] ;
unsigned char arr_11 [19] [19] [19] ;
unsigned int arr_12 [19] [19] [19] ;
unsigned char arr_13 [19] ;
long long int arr_14 [19] ;
unsigned long long int arr_16 [19] [19] [19] ;
unsigned int arr_21 [19] [19] [19] ;
signed char arr_26 [19] ;
unsigned char arr_27 [19] ;
long long int arr_29 [19] [19] [19] ;
short arr_34 [19] [19] [19] ;
signed char arr_36 [19] [19] [19] [19] ;
signed char arr_38 [19] ;
short arr_39 [19] ;
unsigned int arr_50 [19] [19] [19] [19] [19] [19] ;
int arr_58 [23] ;
unsigned int arr_7 [19] ;
unsigned long long int arr_8 [19] ;
unsigned int arr_20 [19] [19] ;
unsigned char arr_31 [19] [19] [19] ;
long long int arr_35 [19] [19] ;
long long int arr_52 [19] [19] [19] ;
int arr_53 [19] [19] [19] [19] ;
unsigned int arr_60 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)33254;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -6287483047264623960LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-20898;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 17917345347373888861ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)214 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3700833539U : 2634964011U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = -6991853599205338469LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 9749238290590729710ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 3745603287U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -7840817420785533411LL : 7811671478234058515LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-29970 : (short)16849;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (short)20789 : (short)7978;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 446514562U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_58 [i_0] = -1253178848;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3679477962U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 12240487305372056172ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 3757002337U : 145363228U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)143 : (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = (i_0 % 2 == 0) ? -3014194690765177517LL : 8278623209857246109LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4539374117466120466LL : 5639001520678364715LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1559881135 : -1621807339;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_60 [i_0] = 2372666053U;
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_52 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_60 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
