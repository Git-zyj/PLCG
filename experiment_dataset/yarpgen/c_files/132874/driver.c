#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned char var_1 = (unsigned char)163;
short var_7 = (short)12179;
unsigned long long int var_8 = 7504580747422637370ULL;
unsigned char var_11 = (unsigned char)55;
unsigned long long int var_12 = 5954553823434709268ULL;
signed char var_15 = (signed char)-102;
unsigned long long int var_16 = 18180344846507469019ULL;
int zero = 0;
short var_18 = (short)11001;
unsigned long long int var_19 = 4043307114795535191ULL;
unsigned long long int var_20 = 672082514697964229ULL;
signed char var_21 = (signed char)-60;
unsigned long long int arr_0 [12] ;
unsigned long long int arr_2 [12] [12] [12] ;
signed char arr_3 [12] [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3107921221782490116ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7306076466652894884ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)7490;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
