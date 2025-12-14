#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)77;
unsigned short var_3 = (unsigned short)15413;
_Bool var_4 = (_Bool)1;
int var_5 = 1242946875;
signed char var_10 = (signed char)-83;
short var_11 = (short)15972;
unsigned int var_12 = 1264400625U;
unsigned short var_14 = (unsigned short)57586;
unsigned int var_15 = 3084164314U;
int zero = 0;
signed char var_17 = (signed char)-61;
signed char var_18 = (signed char)-28;
unsigned int var_19 = 2809141016U;
unsigned char var_20 = (unsigned char)194;
int var_21 = -1654380546;
unsigned int var_22 = 2559115327U;
unsigned long long int arr_1 [14] [14] ;
unsigned char arr_2 [14] [14] ;
_Bool arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 4148543354677220051ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
