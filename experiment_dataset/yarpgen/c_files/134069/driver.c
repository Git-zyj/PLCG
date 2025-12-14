#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4164007761941395891LL;
short var_1 = (short)21803;
long long int var_2 = 5101429359125594889LL;
long long int var_4 = 5041872277148843302LL;
unsigned int var_5 = 1841087300U;
long long int var_6 = -297811861261759974LL;
signed char var_7 = (signed char)36;
signed char var_8 = (signed char)-54;
long long int var_9 = 1814532459794485368LL;
long long int var_10 = -1067862015291581817LL;
unsigned short var_12 = (unsigned short)64570;
long long int var_13 = 7435246488604847625LL;
unsigned short var_14 = (unsigned short)51843;
unsigned long long int var_15 = 324208998757147793ULL;
int zero = 0;
signed char var_16 = (signed char)-114;
long long int var_17 = 6495085490321410207LL;
unsigned long long int var_18 = 18079720806635832781ULL;
long long int var_19 = -2534029098687745804LL;
unsigned int var_20 = 3095942902U;
short var_21 = (short)-27027;
long long int var_22 = 6943186215367545259LL;
unsigned long long int var_23 = 1259694633404176658ULL;
unsigned short var_24 = (unsigned short)49709;
long long int var_25 = 871486400507014532LL;
signed char var_26 = (signed char)51;
unsigned short arr_1 [14] ;
unsigned short arr_2 [14] ;
unsigned long long int arr_4 [14] ;
unsigned short arr_5 [14] [14] [14] ;
unsigned long long int arr_6 [14] [14] [14] ;
signed char arr_7 [14] ;
short arr_10 [14] ;
short arr_8 [14] [14] [14] ;
unsigned short arr_11 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)38492;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)53386;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 3960800019490533277ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)35126;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 14575493490289995246ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (short)-17480;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)27003 : (short)-19400;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)45137;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
