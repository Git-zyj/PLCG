#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3374440118U;
unsigned int var_6 = 3727400973U;
unsigned int var_7 = 2279338485U;
unsigned int var_11 = 960038627U;
unsigned int var_18 = 2924509263U;
int zero = 0;
unsigned int var_19 = 3057557767U;
unsigned int var_20 = 685451133U;
unsigned int var_21 = 613272192U;
unsigned int var_22 = 2870688611U;
unsigned int var_23 = 2592038423U;
unsigned int var_24 = 3244605742U;
unsigned int var_25 = 2434011260U;
unsigned int var_26 = 3658811486U;
unsigned int var_27 = 1172213563U;
unsigned int var_28 = 1883089642U;
unsigned int arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
unsigned int arr_2 [25] [25] ;
unsigned int arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3929687958U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1867674742U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4201917398U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1502800508U;
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
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
