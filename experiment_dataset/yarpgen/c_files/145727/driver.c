#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1170636258;
unsigned short var_4 = (unsigned short)3594;
unsigned char var_7 = (unsigned char)187;
unsigned int var_10 = 2968196994U;
unsigned int var_11 = 667270700U;
unsigned int var_13 = 796839817U;
long long int var_14 = 4560563488669598157LL;
unsigned char var_15 = (unsigned char)190;
long long int var_17 = -7118301681582833809LL;
long long int var_19 = 2141189732509307543LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)84;
unsigned int var_22 = 2693924119U;
int var_23 = -1642750217;
_Bool var_24 = (_Bool)1;
long long int var_25 = -6419136379608118163LL;
unsigned short var_26 = (unsigned short)33244;
short var_27 = (short)17263;
int var_28 = 47697125;
long long int var_29 = 2810304530981036814LL;
int var_30 = -948479971;
long long int var_31 = -35298288669635312LL;
unsigned int var_32 = 1067323947U;
unsigned char var_33 = (unsigned char)75;
unsigned long long int var_34 = 9734565568526184597ULL;
long long int var_35 = 5897675140764402132LL;
_Bool var_36 = (_Bool)1;
short var_37 = (short)15745;
unsigned int var_38 = 3933708864U;
unsigned short var_39 = (unsigned short)7992;
unsigned char var_40 = (unsigned char)209;
int var_41 = 99032189;
unsigned int var_42 = 1776129414U;
int var_43 = 1238488600;
int var_44 = 1309976460;
unsigned int var_45 = 404302890U;
int var_46 = -1611298305;
long long int var_47 = -8866711724400357211LL;
unsigned long long int var_48 = 14773378073542429658ULL;
signed char var_49 = (signed char)117;
signed char arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned char arr_6 [23] [23] ;
unsigned char arr_9 [23] [23] ;
unsigned short arr_11 [23] [23] [23] ;
int arr_27 [17] [17] ;
short arr_39 [17] [17] [17] [17] ;
long long int arr_47 [17] [17] [17] [17] ;
signed char arr_8 [23] [23] ;
unsigned char arr_16 [23] [23] [23] ;
_Bool arr_24 [23] [23] ;
unsigned int arr_45 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-33 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 4067616695U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)173 : (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)4930;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = 1034121138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (short)-9690;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 3181068193239224751LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)105;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)31 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_45 [i_0] = 3918653390U;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
