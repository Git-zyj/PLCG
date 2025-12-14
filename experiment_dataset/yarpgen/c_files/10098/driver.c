#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16499;
short var_17 = (short)1514;
int zero = 0;
short var_18 = (short)-28877;
long long int var_19 = 8041318265935584991LL;
short var_20 = (short)31668;
long long int var_21 = 1594855434737891973LL;
unsigned int var_22 = 789416881U;
unsigned short var_23 = (unsigned short)42780;
unsigned short var_24 = (unsigned short)50532;
unsigned short var_25 = (unsigned short)17249;
short var_26 = (short)25724;
unsigned short var_27 = (unsigned short)57817;
int var_28 = 627154159;
unsigned int var_29 = 3304344618U;
long long int var_30 = -6848461916418494796LL;
_Bool var_31 = (_Bool)0;
unsigned short var_32 = (unsigned short)56188;
short arr_0 [12] ;
unsigned short arr_1 [12] ;
short arr_4 [19] ;
short arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
unsigned short arr_9 [19] [19] ;
short arr_10 [19] ;
long long int arr_13 [19] [19] ;
long long int arr_14 [19] [19] [19] ;
long long int arr_17 [19] ;
unsigned short arr_18 [19] ;
unsigned short arr_19 [19] [19] [19] ;
unsigned int arr_21 [19] [19] ;
unsigned short arr_26 [19] [19] [19] ;
unsigned long long int arr_27 [19] ;
short arr_29 [19] ;
unsigned short arr_32 [23] ;
short arr_33 [23] ;
unsigned long long int arr_34 [23] ;
unsigned short arr_35 [23] ;
short arr_37 [23] [23] [23] ;
unsigned int arr_38 [23] ;
unsigned short arr_41 [23] [23] ;
unsigned short arr_47 [23] ;
unsigned int arr_52 [11] [11] ;
long long int arr_2 [12] [12] ;
unsigned short arr_3 [12] ;
short arr_7 [19] [19] ;
unsigned char arr_8 [19] ;
unsigned short arr_11 [19] ;
long long int arr_15 [19] [19] ;
_Bool arr_23 [19] ;
short arr_24 [19] [19] [19] ;
unsigned int arr_25 [19] [19] [19] ;
short arr_31 [19] ;
short arr_36 [23] [23] ;
long long int arr_40 [23] ;
unsigned short arr_43 [23] ;
_Bool arr_44 [23] [23] [23] ;
long long int arr_48 [23] ;
short arr_51 [20] ;
unsigned short arr_63 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-18587;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)51935;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)21523;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)27028;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 17083133550212661406ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)55617;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (short)-13961;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = -1199757910528947037LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4845551336228649921LL : 5055014683735277356LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = -2470531585393767022LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (unsigned short)6177;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)40944;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 939672962U : 4117581692U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)51741;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 3384361989270327068ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (short)3422;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = (unsigned short)39897;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (short)-30424;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = 13677944093826093184ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_35 [i_0] = (unsigned short)41138;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)5633 : (short)-19399;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = 3319292882U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)50550 : (unsigned short)62509;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = (unsigned short)18485;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_52 [i_0] [i_1] = 1347423969U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1268978426476036729LL : 3181157395949263124LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24533 : (unsigned short)44529;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-25943;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned short)2492;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -6314533106347723515LL : -7604200152408823917LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)29796 : (short)20852;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1958731765U : 465586880U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (short)-31001;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_36 [i_0] [i_1] = (short)-21591;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? -8108629340453817957LL : 4373681658915735206LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34441 : (unsigned short)4480;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_48 [i_0] = 1261511387868334901LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_51 [i_0] = (short)17574;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_63 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)61485 : (unsigned short)61224;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_48 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_63 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
