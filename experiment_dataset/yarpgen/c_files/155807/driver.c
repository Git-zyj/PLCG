#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4126587625U;
unsigned int var_6 = 649316161U;
unsigned int var_7 = 1059420690U;
unsigned int var_8 = 3367072009U;
unsigned int var_10 = 2238906233U;
unsigned int var_11 = 367480757U;
unsigned int var_12 = 55723134U;
unsigned int var_13 = 3622477056U;
unsigned int var_14 = 3383788188U;
unsigned int var_17 = 2666215317U;
unsigned int var_18 = 44349512U;
int zero = 0;
unsigned int var_19 = 1337255308U;
unsigned int var_20 = 2351848642U;
unsigned int var_21 = 3040121781U;
unsigned int var_22 = 2270052379U;
unsigned int var_23 = 954242798U;
unsigned int var_24 = 1805828908U;
unsigned int var_25 = 2642866302U;
unsigned int var_26 = 1680457417U;
unsigned int var_27 = 3231337628U;
unsigned int arr_2 [21] ;
unsigned int arr_6 [21] [21] ;
unsigned int arr_8 [21] [21] ;
unsigned int arr_11 [21] [21] [21] [21] ;
unsigned int arr_12 [21] [21] [21] ;
unsigned int arr_4 [21] ;
unsigned int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2572886563U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 35817106U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 1764608429U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2390048408U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1752959199U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1000448092U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 3914692751U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
