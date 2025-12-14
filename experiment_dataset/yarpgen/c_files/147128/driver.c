#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 653351629;
unsigned int var_1 = 559795877U;
unsigned int var_2 = 1645628708U;
unsigned short var_3 = (unsigned short)7216;
unsigned long long int var_4 = 17974607238934209246ULL;
unsigned short var_5 = (unsigned short)37015;
unsigned long long int var_6 = 695545256632670858ULL;
long long int var_7 = -3681708093137836277LL;
signed char var_8 = (signed char)-95;
int zero = 0;
unsigned short arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
long long int arr_6 [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
unsigned short arr_13 [17] ;
unsigned short arr_14 [17] [17] ;
unsigned short arr_21 [19] [19] ;
int arr_30 [14] ;
unsigned long long int arr_32 [14] ;
unsigned short arr_37 [24] ;
unsigned short arr_3 [14] ;
int arr_4 [14] ;
long long int arr_5 [14] ;
int arr_8 [23] ;
unsigned long long int arr_9 [23] [23] ;
unsigned int arr_10 [23] ;
signed char arr_11 [23] [23] ;
int arr_12 [23] ;
_Bool arr_15 [17] [17] ;
unsigned short arr_16 [17] ;
unsigned short arr_17 [17] ;
long long int arr_18 [17] ;
unsigned int arr_19 [17] ;
unsigned short arr_22 [19] ;
unsigned int arr_23 [19] [19] ;
_Bool arr_24 [19] [19] ;
unsigned short arr_28 [14] ;
int arr_29 [14] ;
unsigned long long int arr_34 [14] ;
int arr_35 [14] ;
unsigned short arr_36 [14] [14] ;
_Bool arr_39 [24] ;
unsigned long long int arr_40 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)15952;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)37331;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 5367941539073740394LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 13084303689966404190ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned short)59449;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)41960;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)19868;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? -2104428346 : -904633371;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = 12721737826156517267ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = (unsigned short)57766;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)20006;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -1829703423;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -6946191087077853397LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 1315215005;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 1386404917260181014ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 912758397U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 1810072757;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned short)26336;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (unsigned short)48253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 8991526570025938667LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 3994302488U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62883 : (unsigned short)40180;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 1079940305U : 451066837U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33154 : (unsigned short)58642;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 1796588210 : -317286514;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? 7793286386315200954ULL : 12951806988579458130ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? -510552424 : 1101396999;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)25830 : (unsigned short)24788;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_39 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_40 [i_0] = 18115573571893379938ULL;
}

void checksum() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
