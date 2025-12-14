#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14597042902900225453ULL;
unsigned char var_2 = (unsigned char)27;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14988568548470454992ULL;
unsigned short var_5 = (unsigned short)22995;
long long int var_7 = -5294825186968319651LL;
unsigned short var_8 = (unsigned short)43111;
unsigned int var_9 = 1046098735U;
int var_10 = -1225138044;
long long int var_11 = 5018137038799624741LL;
unsigned int var_12 = 3086824284U;
int var_13 = -1982394633;
int zero = 0;
signed char var_15 = (signed char)-103;
unsigned char var_16 = (unsigned char)70;
long long int var_17 = -2364104782509340541LL;
unsigned char var_18 = (unsigned char)222;
unsigned char var_19 = (unsigned char)3;
int var_20 = 121780560;
unsigned int var_21 = 2346877027U;
unsigned int var_22 = 2343113873U;
unsigned char var_23 = (unsigned char)120;
unsigned int var_24 = 687486659U;
unsigned short var_25 = (unsigned short)19017;
unsigned int var_26 = 1896012832U;
int var_27 = -1388468422;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)72;
unsigned char var_30 = (unsigned char)39;
short arr_0 [25] [25] ;
long long int arr_1 [25] ;
unsigned short arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
unsigned long long int arr_5 [13] ;
unsigned long long int arr_7 [24] ;
unsigned int arr_9 [24] [24] ;
int arr_10 [24] ;
unsigned short arr_11 [24] ;
_Bool arr_12 [24] [24] [24] ;
unsigned long long int arr_18 [24] ;
short arr_22 [24] [24] [24] ;
unsigned long long int arr_23 [24] ;
_Bool arr_24 [24] [24] [24] [24] ;
int arr_25 [24] [24] [24] ;
unsigned short arr_29 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_35 [24] ;
unsigned int arr_44 [13] ;
unsigned short arr_4 [25] ;
unsigned char arr_15 [24] [24] ;
unsigned char arr_16 [24] [24] ;
int arr_20 [24] [24] [24] ;
unsigned short arr_21 [24] [24] [24] ;
unsigned short arr_33 [24] [24] [24] ;
unsigned long long int arr_34 [24] ;
short arr_41 [24] [24] [24] [24] [24] [24] ;
long long int arr_42 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)29380;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1652410651718179621LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)52808;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)48793;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 14268214531933425164ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 7371393828946542608ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1195498077U : 1660762968U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -1630815246;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned short)31454;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 1792391608259098819ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)-7778;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 9889381877931710304ULL : 12127193227543722034ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 233853186;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)60560;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = 1914757166U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_44 [i_0] = 279417633U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)15560;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)9 : (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)173 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 214373463 : -1865777557;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)35601 : (unsigned short)52812;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)62700 : (unsigned short)60066;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? 2544968439599196297ULL : 10136105196872286898ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)-31411 : (short)29235;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? -3287643060414057399LL : 8661671337588234360LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
