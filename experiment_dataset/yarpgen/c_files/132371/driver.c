#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8755887519774315535LL;
unsigned long long int var_1 = 8055976584892844597ULL;
int var_2 = 1686884569;
signed char var_3 = (signed char)88;
unsigned int var_4 = 223654796U;
signed char var_5 = (signed char)31;
unsigned short var_6 = (unsigned short)43519;
unsigned long long int var_7 = 18409826171339603344ULL;
unsigned char var_8 = (unsigned char)174;
short var_9 = (short)-6423;
short var_11 = (short)-15040;
signed char var_12 = (signed char)-1;
signed char var_15 = (signed char)2;
short var_16 = (short)-21225;
int zero = 0;
signed char var_18 = (signed char)-13;
unsigned short var_19 = (unsigned short)50744;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14808740443771947798ULL;
unsigned int var_22 = 3022240699U;
long long int var_23 = -1454651996128819826LL;
signed char var_24 = (signed char)-41;
unsigned short var_25 = (unsigned short)62279;
_Bool var_26 = (_Bool)1;
long long int var_27 = -807857990953356526LL;
signed char var_28 = (signed char)57;
unsigned short var_29 = (unsigned short)36525;
signed char var_30 = (signed char)-62;
short var_31 = (short)-19486;
signed char var_32 = (signed char)56;
short var_33 = (short)20854;
unsigned char var_34 = (unsigned char)46;
short var_35 = (short)9905;
unsigned long long int var_36 = 11599307039542092446ULL;
signed char arr_6 [21] [21] [21] ;
unsigned char arr_13 [21] ;
unsigned long long int arr_14 [21] ;
unsigned char arr_19 [25] ;
long long int arr_28 [23] [23] ;
long long int arr_33 [23] ;
unsigned int arr_36 [22] ;
signed char arr_41 [22] [22] ;
short arr_42 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)14 : (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 6950264072281822947ULL : 3052062566386264678ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? 2979998141152488521LL : 4709547289507321341LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = 629000010823457686LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 2126839209U : 2611097051U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-31 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)21103 : (short)-16470;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
