#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3568192477U;
unsigned int var_2 = 3461674476U;
unsigned int var_3 = 796422660U;
unsigned int var_5 = 935986490U;
unsigned int var_6 = 551598107U;
unsigned int var_7 = 494475038U;
unsigned int var_8 = 4188209738U;
unsigned int var_9 = 2247360982U;
unsigned int var_10 = 2365289079U;
unsigned int var_11 = 3732569694U;
unsigned int var_12 = 2061752349U;
int zero = 0;
unsigned int var_13 = 2865052431U;
unsigned int var_14 = 3268660121U;
unsigned int var_15 = 1886934452U;
unsigned int var_16 = 2607579796U;
unsigned int var_17 = 3420915583U;
unsigned int var_18 = 1779868743U;
unsigned int var_19 = 2964832339U;
unsigned int var_20 = 3679101077U;
unsigned int var_21 = 2993828287U;
unsigned int var_22 = 3098516446U;
unsigned int var_23 = 2665335128U;
unsigned int var_24 = 2134025049U;
unsigned int var_25 = 650308819U;
unsigned int var_26 = 1349107476U;
unsigned int var_27 = 4120609886U;
unsigned int var_28 = 1871772707U;
unsigned int var_29 = 2701848799U;
unsigned int var_30 = 3230281149U;
unsigned int var_31 = 3216881960U;
unsigned int var_32 = 1135326833U;
unsigned int var_33 = 3085308862U;
unsigned int var_34 = 2585731402U;
unsigned int var_35 = 2566545596U;
unsigned int var_36 = 492891232U;
unsigned int var_37 = 3212495137U;
unsigned int var_38 = 3097270581U;
unsigned int var_39 = 178350943U;
unsigned int var_40 = 537958210U;
unsigned int var_41 = 4094775743U;
unsigned int var_42 = 3691315950U;
unsigned int var_43 = 1217628794U;
unsigned int var_44 = 835501296U;
unsigned int var_45 = 3315912741U;
unsigned int arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
unsigned int arr_3 [16] ;
unsigned int arr_4 [16] ;
unsigned int arr_7 [16] [16] [16] ;
unsigned int arr_8 [16] ;
unsigned int arr_12 [16] [16] [16] ;
unsigned int arr_13 [16] [16] ;
unsigned int arr_15 [16] [16] [16] [16] ;
unsigned int arr_16 [16] [16] [16] ;
unsigned int arr_23 [16] ;
unsigned int arr_24 [16] ;
unsigned int arr_26 [16] [16] [16] ;
unsigned int arr_30 [16] ;
unsigned int arr_33 [22] ;
unsigned int arr_35 [22] ;
unsigned int arr_38 [22] ;
unsigned int arr_6 [16] ;
unsigned int arr_9 [16] [16] [16] ;
unsigned int arr_14 [16] [16] [16] [16] ;
unsigned int arr_19 [16] [16] [16] ;
unsigned int arr_20 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1245582472U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 3456996398U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1841594257U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1730685712U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3890793869U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 2735153163U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2246818779U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 3529192869U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 613182615U : 676589968U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 412983223U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = 2638766870U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = 1612756799U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2491320468U : 2974301926U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 348381629U : 1866439841U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = 3843763584U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = 313574604U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_38 [i_0] = 1980191886U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2316057792U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 580868071U : 1812433712U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1770027973U : 1330370584U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1086130090U : 2655424324U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2735478685U : 3995694180U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
