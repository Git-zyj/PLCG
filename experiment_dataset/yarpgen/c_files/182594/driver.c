#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
long long int var_3 = 2596948472880667388LL;
long long int var_10 = -668152157525743474LL;
long long int var_13 = 646751931343914124LL;
int zero = 0;
unsigned long long int var_18 = 11084130846644765224ULL;
signed char var_19 = (signed char)-19;
unsigned char var_20 = (unsigned char)250;
unsigned int var_21 = 118772153U;
unsigned short var_22 = (unsigned short)9991;
unsigned char var_23 = (unsigned char)152;
unsigned long long int var_24 = 8325184491513038797ULL;
unsigned long long int var_25 = 4449324674136793918ULL;
unsigned char var_26 = (unsigned char)183;
short var_27 = (short)-11500;
unsigned char var_28 = (unsigned char)52;
short var_29 = (short)20343;
long long int var_30 = 2008413951865822486LL;
unsigned long long int var_31 = 17962899187575494224ULL;
short var_32 = (short)-17716;
unsigned char var_33 = (unsigned char)124;
unsigned short arr_0 [20] ;
signed char arr_1 [20] ;
unsigned char arr_8 [23] [23] ;
unsigned int arr_9 [23] [23] ;
signed char arr_15 [23] ;
short arr_2 [20] ;
unsigned char arr_6 [20] ;
long long int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)11550;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 3626347546U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-20111;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = -8390613343492968412LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
