#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
unsigned int var_1 = 1645521334U;
unsigned short var_2 = (unsigned short)62896;
signed char var_4 = (signed char)-13;
signed char var_8 = (signed char)-113;
unsigned char var_11 = (unsigned char)107;
signed char var_12 = (signed char)-20;
unsigned int var_13 = 4226430383U;
int var_14 = -348062625;
int zero = 0;
short var_18 = (short)20691;
unsigned char var_19 = (unsigned char)121;
signed char var_20 = (signed char)109;
unsigned int var_21 = 2557135431U;
unsigned short var_22 = (unsigned short)41902;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)58678;
unsigned long long int var_25 = 10235182199027252264ULL;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)51362;
signed char var_28 = (signed char)-79;
unsigned int arr_12 [17] ;
unsigned int arr_22 [17] [17] [17] ;
unsigned char arr_23 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3972690262U : 3464767948U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1892492260U : 2761690260U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)145 : (unsigned char)224;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
