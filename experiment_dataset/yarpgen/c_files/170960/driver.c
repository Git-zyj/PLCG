#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5158286636171495048ULL;
unsigned long long int var_3 = 10650126358369774945ULL;
unsigned int var_4 = 4133229149U;
unsigned long long int var_7 = 1176244337914802286ULL;
unsigned int var_10 = 263655870U;
short var_11 = (short)25792;
signed char var_14 = (signed char)-103;
int zero = 0;
unsigned long long int var_19 = 12887596760683064484ULL;
unsigned long long int var_20 = 17842069416330147045ULL;
unsigned int var_21 = 4212616094U;
signed char arr_0 [22] ;
unsigned long long int arr_2 [22] ;
short arr_3 [22] [22] [22] ;
long long int arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 9325734541637380073ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)26390;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 7880388472042203989LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
