#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)65;
unsigned long long int var_3 = 11786561304857527712ULL;
unsigned short var_4 = (unsigned short)2109;
unsigned long long int var_5 = 9026333669559443410ULL;
short var_6 = (short)-23165;
unsigned int var_7 = 3863692008U;
unsigned char var_8 = (unsigned char)142;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 18341149501843061678ULL;
short var_11 = (short)-6129;
signed char var_12 = (signed char)-21;
unsigned short var_13 = (unsigned short)50345;
int zero = 0;
long long int var_14 = -9022885446440106385LL;
long long int var_15 = 713179931015278449LL;
unsigned short var_16 = (unsigned short)51232;
unsigned char var_17 = (unsigned char)46;
unsigned char var_18 = (unsigned char)169;
unsigned int var_19 = 388674813U;
unsigned int var_20 = 1891746631U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)16;
unsigned char var_23 = (unsigned char)195;
unsigned char var_24 = (unsigned char)225;
int var_25 = -874151014;
int var_26 = 1373413903;
_Bool var_27 = (_Bool)0;
short var_28 = (short)690;
unsigned int var_29 = 1020033340U;
_Bool var_30 = (_Bool)0;
short var_31 = (short)-25916;
_Bool var_32 = (_Bool)1;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)25676;
short var_35 = (short)-9267;
short var_36 = (short)-303;
long long int var_37 = 3639665549039748915LL;
signed char var_38 = (signed char)104;
_Bool var_39 = (_Bool)1;
short var_40 = (short)-20942;
unsigned long long int var_41 = 3607676298547121596ULL;
unsigned char var_42 = (unsigned char)192;
_Bool var_43 = (_Bool)0;
unsigned long long int var_44 = 10058917087741132566ULL;
signed char var_45 = (signed char)98;
unsigned int var_46 = 1218187602U;
long long int var_47 = -3481937673682960011LL;
unsigned long long int var_48 = 13562792114500543968ULL;
signed char var_49 = (signed char)35;
unsigned short var_50 = (unsigned short)28121;
unsigned int var_51 = 1314074989U;
short var_52 = (short)-10518;
int arr_2 [23] [23] ;
int arr_4 [23] [23] [23] ;
short arr_7 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_8 [23] [23] [23] [23] ;
short arr_9 [23] [23] [23] ;
unsigned char arr_11 [23] [23] [23] [23] [23] ;
long long int arr_12 [23] [23] ;
_Bool arr_16 [23] [23] [23] ;
short arr_19 [23] [23] ;
unsigned char arr_20 [23] [23] ;
int arr_28 [23] [23] [23] ;
signed char arr_31 [23] [23] [23] ;
long long int arr_33 [23] [23] [23] [23] ;
unsigned long long int arr_36 [23] [23] [23] [23] [23] ;
unsigned int arr_39 [23] [23] [23] ;
unsigned int arr_43 [24] ;
unsigned long long int arr_49 [12] [12] [12] ;
short arr_51 [12] [12] [12] ;
signed char arr_59 [12] [12] ;
int arr_64 [12] [12] ;
long long int arr_17 [23] [23] [23] ;
unsigned short arr_18 [23] [23] ;
unsigned short arr_22 [23] [23] [23] ;
unsigned short arr_40 [23] ;
signed char arr_53 [12] [12] [12] ;
unsigned short arr_60 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -1085512318;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1737283676;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-6953;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 7954909158380624092ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)9259;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)6 : (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = 4346191649812060558LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (short)11222;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -1820811000;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 1774677527655803242LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 3545300687505928292ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1444421980U : 1227914623U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_43 [i_0] = 1516247046U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = 17952339396275462907ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (short)14422;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_59 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_64 [i_0] [i_1] = -1699964134;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 6306778267495618909LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)32707;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)51081;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13308 : (unsigned short)58475;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43236;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_53 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
