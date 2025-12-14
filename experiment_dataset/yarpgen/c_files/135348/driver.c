#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3277904980167583448ULL;
unsigned int var_1 = 646739660U;
unsigned short var_2 = (unsigned short)31529;
unsigned short var_4 = (unsigned short)4877;
unsigned int var_5 = 3730936183U;
unsigned long long int var_10 = 12724576143044931706ULL;
unsigned long long int var_11 = 2991992479104079899ULL;
unsigned short var_12 = (unsigned short)11889;
unsigned int var_13 = 3745671461U;
int zero = 0;
unsigned short var_14 = (unsigned short)58982;
unsigned short var_15 = (unsigned short)40022;
unsigned short var_16 = (unsigned short)35850;
unsigned short var_17 = (unsigned short)20006;
unsigned short var_18 = (unsigned short)22502;
unsigned int var_19 = 4050792800U;
unsigned short var_20 = (unsigned short)22218;
unsigned short var_21 = (unsigned short)27084;
unsigned long long int var_22 = 16109117362186885304ULL;
unsigned long long int var_23 = 12987239051424719934ULL;
unsigned long long int var_24 = 8394498434651958239ULL;
unsigned long long int var_25 = 11237826417468130912ULL;
unsigned long long int var_26 = 17241535567850356485ULL;
unsigned int var_27 = 3045070097U;
unsigned int var_28 = 2436111728U;
unsigned short var_29 = (unsigned short)23794;
unsigned short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned long long int arr_3 [23] ;
unsigned int arr_4 [23] [23] ;
unsigned int arr_5 [23] [23] ;
unsigned short arr_6 [13] ;
unsigned short arr_7 [13] ;
unsigned int arr_10 [13] [13] ;
unsigned int arr_11 [10] ;
unsigned short arr_13 [10] ;
unsigned long long int arr_15 [10] [10] ;
unsigned int arr_19 [10] [10] [10] [10] ;
unsigned short arr_22 [10] ;
unsigned short arr_23 [10] [10] [10] ;
unsigned short arr_32 [10] [10] ;
unsigned short arr_16 [10] [10] ;
unsigned short arr_20 [10] [10] [10] [10] ;
unsigned int arr_21 [10] ;
unsigned long long int arr_26 [10] [10] ;
unsigned short arr_36 [10] ;
unsigned int arr_37 [10] ;
unsigned short arr_38 [10] [10] ;
unsigned long long int arr_39 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)50249;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)5930;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1403719506831416172ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 2581470505U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 2763384127U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)62675;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)49549;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 3597976793U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 2842069171U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned short)56800;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = 5277992270213885382ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1593581939U : 3193930613U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (unsigned short)46308;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned short)8686;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned short)3591;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)44972;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)39071 : (unsigned short)44789;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = 2087916853U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_26 [i_0] [i_1] = 1222178334052557833ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = (unsigned short)44388;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = 433702136U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned short)8599;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = 9604523324577994626ULL;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
