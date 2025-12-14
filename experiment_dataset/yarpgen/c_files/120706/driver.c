#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
unsigned char var_7 = (unsigned char)44;
unsigned char var_10 = (unsigned char)175;
int zero = 0;
unsigned int var_17 = 2758918567U;
unsigned int var_18 = 3618576051U;
short var_19 = (short)23250;
short var_20 = (short)3052;
long long int var_21 = 2791491986614046721LL;
unsigned char var_22 = (unsigned char)213;
short var_23 = (short)18268;
int var_24 = 358458821;
signed char arr_0 [14] [14] ;
int arr_1 [14] ;
unsigned int arr_3 [14] ;
unsigned long long int arr_4 [14] ;
unsigned int arr_5 [14] [14] [14] ;
int arr_9 [14] ;
short arr_22 [22] ;
unsigned long long int arr_24 [22] ;
unsigned long long int arr_26 [22] [22] ;
int arr_29 [22] [22] [22] [22] ;
long long int arr_12 [14] [14] [14] [14] ;
unsigned int arr_19 [14] [14] [14] [14] ;
long long int arr_20 [14] ;
unsigned long long int arr_23 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1296448880;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1336504176U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 14897335805232737681ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1404832399U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 1288120471;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (short)32365;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 455462082160213308ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = 17683688185416629620ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = -223461935;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 6203967336329380452LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1361162073U : 1787753561U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = -4696724227320828021LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 3915046445120671923ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
