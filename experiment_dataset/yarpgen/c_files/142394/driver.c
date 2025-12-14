#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1524894331;
unsigned char var_2 = (unsigned char)193;
int var_3 = 354771018;
unsigned char var_5 = (unsigned char)228;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)41;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_14 = -2084080671;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5378879092577970195ULL;
unsigned int var_19 = 809859793U;
int var_20 = -1564889127;
unsigned int arr_1 [20] ;
unsigned int arr_3 [20] ;
int arr_4 [20] [20] ;
_Bool arr_6 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2954026545U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 411331367U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1802154234 : -1048115663;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
