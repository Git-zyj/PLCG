#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1351782098918154188LL;
signed char var_1 = (signed char)12;
long long int var_4 = -5448406263516816015LL;
signed char var_6 = (signed char)(-127 - 1);
signed char var_7 = (signed char)44;
long long int var_8 = -1576636898999189840LL;
signed char var_9 = (signed char)-64;
long long int var_10 = 2462879892559554991LL;
long long int var_11 = 4561347882761313106LL;
long long int var_12 = 6247956747096722722LL;
signed char var_13 = (signed char)25;
signed char var_14 = (signed char)-69;
long long int var_15 = 6538756695280906775LL;
signed char var_16 = (signed char)118;
int zero = 0;
long long int var_17 = 5093831936325649413LL;
signed char var_18 = (signed char)-104;
signed char var_19 = (signed char)28;
long long int var_20 = -8917320290894974473LL;
long long int var_21 = 2553935250071453343LL;
long long int var_22 = -6810972773686145320LL;
signed char arr_0 [11] [11] ;
long long int arr_1 [11] ;
long long int arr_2 [11] [11] ;
signed char arr_4 [11] [11] ;
long long int arr_6 [11] ;
signed char arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -6569318954238404122LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2112753259679370750LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)11 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -7185755594988051744LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-56 : (signed char)24;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
