#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3496613756U;
unsigned int var_2 = 535066401U;
unsigned int var_3 = 379208940U;
unsigned int var_5 = 3204937472U;
unsigned int var_6 = 2631986504U;
unsigned int var_7 = 3722846114U;
unsigned int var_8 = 3331055587U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1985775489U;
unsigned int var_13 = 785102003U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1666509875U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 424509105U;
unsigned int var_18 = 2780399586U;
unsigned int var_19 = 1181146735U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2655972485U;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
_Bool arr_0 [17] ;
_Bool arr_1 [17] ;
unsigned int arr_4 [17] [17] ;
unsigned int arr_5 [17] ;
unsigned int arr_7 [17] [17] ;
unsigned int arr_8 [17] [17] [17] [17] [17] [17] ;
_Bool arr_9 [17] [17] [17] [17] ;
unsigned int arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 4131849835U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3057265986U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 358402923U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2716681997U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 1219753040U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
