#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12778220128734743309ULL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-48;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-69;
unsigned int var_7 = 4277760216U;
int var_9 = 23401586;
short var_10 = (short)-28392;
unsigned char var_11 = (unsigned char)83;
long long int var_14 = 5204529365410240133LL;
unsigned char var_16 = (unsigned char)43;
int var_17 = -728017037;
int zero = 0;
unsigned short var_18 = (unsigned short)53554;
long long int var_19 = -8942848474307668964LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)90;
int var_22 = -233376299;
int var_23 = 316257084;
unsigned int var_24 = 2576272685U;
short var_25 = (short)29588;
unsigned char var_26 = (unsigned char)79;
unsigned short var_27 = (unsigned short)35931;
unsigned char var_28 = (unsigned char)98;
signed char var_29 = (signed char)-44;
unsigned int var_30 = 275877967U;
signed char var_31 = (signed char)65;
unsigned long long int var_32 = 13631989409788657281ULL;
unsigned short var_33 = (unsigned short)55468;
unsigned long long int var_34 = 13120741563906884254ULL;
_Bool var_35 = (_Bool)0;
int var_36 = 1708577336;
long long int var_37 = -5299483563924751538LL;
int var_38 = -779616998;
long long int var_39 = 6809294537625509810LL;
signed char var_40 = (signed char)-40;
unsigned short var_41 = (unsigned short)55716;
short var_42 = (short)-29004;
_Bool var_43 = (_Bool)0;
long long int var_44 = 2899577281582361660LL;
unsigned short var_45 = (unsigned short)52783;
signed char arr_0 [14] [14] ;
unsigned long long int arr_1 [14] [14] ;
unsigned int arr_2 [14] [14] ;
int arr_3 [14] ;
long long int arr_4 [14] ;
short arr_5 [14] ;
unsigned short arr_10 [14] [14] [14] ;
int arr_12 [14] [14] [14] [14] ;
unsigned int arr_17 [14] [14] [14] [14] ;
_Bool arr_20 [15] ;
signed char arr_21 [15] ;
short arr_22 [15] [15] ;
_Bool arr_23 [15] [15] ;
long long int arr_28 [15] [15] [15] ;
unsigned int arr_33 [14] ;
unsigned long long int arr_35 [14] ;
int arr_39 [23] ;
int arr_40 [23] [23] ;
int arr_41 [23] ;
signed char arr_42 [23] [23] ;
unsigned char arr_43 [23] [23] ;
short arr_45 [23] [23] [23] ;
int arr_46 [23] [23] [23] [23] ;
short arr_48 [23] [23] [23] [23] [23] ;
unsigned int arr_50 [23] ;
short arr_53 [23] [23] [23] [23] [23] [23] ;
_Bool arr_54 [23] [23] ;
signed char arr_57 [23] [23] [23] [23] ;
_Bool arr_60 [23] [23] [23] [23] ;
short arr_18 [14] ;
int arr_19 [14] [14] [14] [14] [14] ;
int arr_24 [15] ;
int arr_49 [23] [23] ;
unsigned short arr_55 [23] ;
signed char arr_56 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 17291121346413726352ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 3153151137U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 449375481;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3169613883527050579LL : -660651968699331180LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)-28375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)7800 : (unsigned short)39894;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -588189813;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 1520302720U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (short)12632;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = -5539811963451494422LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = 624255099U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = 4194414999406098601ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_39 [i_0] = -1361040955;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_40 [i_0] [i_1] = -1435853426;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_41 [i_0] = -1650812923;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_42 [i_0] [i_1] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_43 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29539 : (short)-15331;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = 1932505750;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-3146;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_50 [i_0] = 3970360103U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)16378;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_54 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)22234 : (short)3813;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -1224542420 : -3572274;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = -1343237368;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_49 [i_0] [i_1] = (i_1 % 2 == 0) ? -1205207561 : -1237407488;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45854 : (unsigned short)3136;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)114 : (signed char)54;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_56 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
