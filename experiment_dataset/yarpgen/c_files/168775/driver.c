#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
signed char var_5 = (signed char)-97;
unsigned short var_7 = (unsigned short)16634;
int var_9 = -637064379;
unsigned short var_11 = (unsigned short)19362;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)101;
unsigned int var_15 = 4287783867U;
unsigned short var_16 = (unsigned short)39920;
unsigned short var_17 = (unsigned short)26789;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 333287220784200726ULL;
unsigned long long int var_20 = 11429191871845594778ULL;
unsigned short var_21 = (unsigned short)59600;
unsigned long long int arr_3 [25] ;
signed char arr_4 [25] [25] ;
unsigned short arr_5 [25] [25] ;
_Bool arr_6 [25] ;
unsigned short arr_8 [25] [25] [25] [25] ;
unsigned short arr_11 [25] [25] [25] [25] [25] ;
unsigned char arr_12 [25] [25] ;
unsigned long long int arr_13 [25] ;
long long int arr_14 [25] ;
unsigned char arr_15 [25] ;
unsigned int arr_18 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 9708568018486206599ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)4581;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)2005;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)17805;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)74 : (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 12545787823529041260ULL : 4909825015084975824ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = -5207520078048350663LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = 1366955766U;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
