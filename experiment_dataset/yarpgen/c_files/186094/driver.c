#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27906;
unsigned long long int var_1 = 5339222934221409881ULL;
unsigned char var_3 = (unsigned char)122;
unsigned int var_4 = 2985470489U;
unsigned long long int var_5 = 11468604653786267616ULL;
short var_6 = (short)28171;
short var_7 = (short)20201;
unsigned int var_8 = 4123592546U;
unsigned long long int var_11 = 2334034837665704409ULL;
unsigned short var_14 = (unsigned short)33772;
unsigned char var_15 = (unsigned char)67;
short var_16 = (short)-32525;
int zero = 0;
signed char var_17 = (signed char)38;
unsigned long long int var_18 = 8786630954083183925ULL;
unsigned long long int var_19 = 8932553763588549461ULL;
unsigned long long int var_20 = 18380837978386786722ULL;
unsigned char var_21 = (unsigned char)239;
unsigned short var_22 = (unsigned short)15606;
unsigned int var_23 = 3325479495U;
unsigned short var_24 = (unsigned short)47339;
unsigned int var_25 = 4208207537U;
unsigned long long int var_26 = 2679248495977187584ULL;
unsigned long long int var_27 = 537421543446345103ULL;
long long int var_28 = -2353001462738929120LL;
int var_29 = -60885069;
unsigned int arr_0 [19] [19] ;
short arr_7 [22] [22] ;
unsigned char arr_8 [22] ;
int arr_10 [22] [22] ;
unsigned short arr_12 [22] [22] [22] ;
long long int arr_18 [22] [22] ;
short arr_20 [19] [19] ;
signed char arr_6 [15] ;
short arr_19 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2583509752U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)152;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = -218336616;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)40596;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = 2886305422827616879LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (short)10626;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)4184 : (short)26530;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
