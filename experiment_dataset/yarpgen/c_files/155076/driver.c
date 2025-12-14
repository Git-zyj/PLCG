#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -572055311;
unsigned long long int var_2 = 18265321989297829360ULL;
int var_4 = 1969734603;
_Bool var_5 = (_Bool)0;
short var_6 = (short)3899;
unsigned short var_8 = (unsigned short)45660;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-34;
int var_12 = 1936997737;
unsigned short var_13 = (unsigned short)18818;
int zero = 0;
unsigned short var_16 = (unsigned short)10808;
int var_17 = 843797558;
unsigned long long int var_18 = 10331643816976701574ULL;
unsigned char var_19 = (unsigned char)236;
signed char var_20 = (signed char)-7;
unsigned int var_21 = 4274663945U;
unsigned char var_22 = (unsigned char)240;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 17818926208854952737ULL;
int var_26 = 587959471;
unsigned short var_27 = (unsigned short)33932;
long long int var_28 = -8100826711836307931LL;
signed char var_29 = (signed char)6;
unsigned char var_30 = (unsigned char)9;
unsigned long long int var_31 = 7697157909246833329ULL;
int var_32 = -1040521779;
unsigned short var_33 = (unsigned short)24956;
unsigned char var_34 = (unsigned char)209;
int var_35 = -412766265;
unsigned short var_36 = (unsigned short)54127;
unsigned short var_37 = (unsigned short)8419;
long long int var_38 = -319228636201627297LL;
_Bool var_39 = (_Bool)0;
int var_40 = -832303974;
unsigned int var_41 = 1611708598U;
short var_42 = (short)-27558;
unsigned char var_43 = (unsigned char)49;
unsigned short var_44 = (unsigned short)5377;
unsigned char var_45 = (unsigned char)146;
unsigned short arr_1 [10] [10] ;
unsigned int arr_5 [10] ;
unsigned long long int arr_6 [10] ;
unsigned int arr_10 [10] [10] ;
_Bool arr_12 [10] [10] [10] [10] ;
unsigned short arr_13 [10] [10] [10] [10] ;
unsigned int arr_14 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_16 [21] ;
signed char arr_17 [21] ;
int arr_18 [21] ;
unsigned long long int arr_21 [21] [21] ;
unsigned int arr_22 [21] ;
unsigned int arr_25 [21] [21] ;
signed char arr_26 [21] ;
int arr_27 [21] [21] ;
_Bool arr_28 [21] ;
_Bool arr_32 [21] [21] [21] ;
int arr_35 [21] ;
int arr_36 [21] [21] [21] [21] ;
signed char arr_39 [10] ;
unsigned int arr_40 [10] [10] ;
unsigned short arr_44 [10] ;
int arr_45 [10] [10] [10] ;
signed char arr_48 [10] [10] [10] ;
unsigned char arr_57 [10] [10] [10] ;
_Bool arr_64 [25] [25] ;
_Bool arr_65 [25] ;
short arr_67 [25] ;
unsigned long long int arr_68 [25] ;
signed char arr_19 [21] ;
int arr_20 [21] [21] ;
unsigned short arr_23 [21] [21] ;
unsigned int arr_24 [21] [21] [21] ;
int arr_29 [21] [21] [21] ;
signed char arr_38 [21] ;
unsigned int arr_43 [10] ;
int arr_47 [10] ;
signed char arr_54 [10] [10] ;
int arr_60 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_61 [10] [10] [10] ;
signed char arr_62 [10] [10] ;
unsigned short arr_63 [10] [10] ;
int arr_66 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)29470;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2197240633U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 9759935712042705546ULL : 13589344207835482869ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 2737739879U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)12659;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3542963914U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = 2138977108U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 1869934658;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 13069942620051501178ULL : 2604490384057274716ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 2601804001U : 3042711958U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = 1141114232U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = 611743418;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = 1223035325;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 941828543;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_40 [i_0] [i_1] = 2345670489U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_44 [i_0] = (unsigned short)38759;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = 1580634615;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_64 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_65 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_67 [i_0] = (short)3751;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_68 [i_0] = 7493946643702954449ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 958553544;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)60605 : (unsigned short)48165;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1599335033U : 4294114958U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = -2087912753;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_43 [i_0] = 2608152097U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_47 [i_0] = 1395377398;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_54 [i_0] [i_1] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 1879815037 : 206021837;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_61 [i_0] [i_1] [i_2] = (unsigned short)22210;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_62 [i_0] [i_1] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_63 [i_0] [i_1] = (unsigned short)6289;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_66 [i_0] = 732368694;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_54 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_61 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_63 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_66 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
