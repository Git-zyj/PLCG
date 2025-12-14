#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1666443389;
short var_2 = (short)24777;
signed char var_3 = (signed char)-113;
unsigned short var_4 = (unsigned short)49600;
int var_5 = 1473761057;
signed char var_7 = (signed char)-77;
int zero = 0;
short var_11 = (short)-26887;
unsigned short var_12 = (unsigned short)47451;
unsigned char var_13 = (unsigned char)148;
short var_14 = (short)23451;
unsigned int var_15 = 3928397859U;
signed char var_16 = (signed char)-101;
short var_17 = (short)-11040;
signed char var_18 = (signed char)74;
signed char var_19 = (signed char)50;
unsigned int arr_0 [17] ;
short arr_1 [17] ;
unsigned int arr_2 [11] [11] ;
_Bool arr_5 [17] [17] ;
long long int arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3183550057U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)27722;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1894450517U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = -214654842403334303LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
