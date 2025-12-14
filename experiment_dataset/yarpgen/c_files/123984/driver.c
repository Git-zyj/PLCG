#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2319996796U;
unsigned int var_4 = 2131639667U;
unsigned int var_7 = 3701688259U;
unsigned int var_12 = 2293451661U;
unsigned int var_14 = 3743991679U;
unsigned int var_16 = 1780010093U;
int zero = 0;
unsigned int var_18 = 2793245910U;
unsigned int var_19 = 1477427469U;
unsigned int var_20 = 2417061034U;
unsigned int var_21 = 1121351699U;
unsigned int var_22 = 2849080698U;
unsigned int var_23 = 4294122598U;
unsigned int var_24 = 4054213384U;
unsigned int var_25 = 2722172718U;
unsigned int var_26 = 1786416483U;
unsigned int var_27 = 3472331563U;
unsigned int var_28 = 4226512384U;
unsigned int var_29 = 3866454213U;
unsigned int var_30 = 2520363615U;
unsigned int var_31 = 2977289394U;
unsigned int var_32 = 34573262U;
unsigned int var_33 = 970652204U;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned int arr_2 [13] [13] ;
unsigned int arr_3 [13] [13] ;
unsigned int arr_5 [13] ;
unsigned int arr_6 [13] ;
unsigned int arr_8 [13] ;
unsigned int arr_13 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2540135922U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1663807621U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 5681177U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 2379476418U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 2740030983U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 221637867U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 3262997644U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 905356820U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
