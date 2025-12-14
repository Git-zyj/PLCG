#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27382;
short var_2 = (short)-15222;
short var_5 = (short)-11372;
signed char var_10 = (signed char)55;
unsigned char var_12 = (unsigned char)236;
int var_15 = 1680610004;
unsigned short var_16 = (unsigned short)14086;
int zero = 0;
unsigned long long int var_17 = 7763751838664593329ULL;
_Bool var_18 = (_Bool)1;
int var_19 = -1911323264;
long long int var_20 = -3319550159280393171LL;
unsigned int var_21 = 1555155642U;
unsigned int var_22 = 3393529581U;
short var_23 = (short)9794;
signed char arr_0 [15] ;
unsigned long long int arr_4 [15] [15] [15] ;
int arr_12 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)94;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5948770646929622570ULL : 14254467573324150985ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 15929552;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
