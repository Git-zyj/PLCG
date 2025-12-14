#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3552;
unsigned int var_3 = 2649480925U;
unsigned short var_6 = (unsigned short)32224;
unsigned short var_8 = (unsigned short)27350;
unsigned short var_10 = (unsigned short)8738;
int zero = 0;
unsigned int var_11 = 2892175030U;
unsigned short var_12 = (unsigned short)63740;
unsigned int var_13 = 2592733062U;
unsigned int var_14 = 1411805964U;
unsigned short var_15 = (unsigned short)6049;
unsigned int var_16 = 42660868U;
unsigned short arr_1 [17] ;
unsigned int arr_2 [17] ;
unsigned int arr_3 [17] [17] [17] ;
unsigned short arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)11785;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 451970741U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4055944954U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)41229 : (unsigned short)23276;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
