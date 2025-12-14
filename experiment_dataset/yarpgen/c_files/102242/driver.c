#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20089;
int var_1 = -914526968;
unsigned long long int var_2 = 13930280958722244943ULL;
short var_5 = (short)-14471;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_10 = 2619300426230457351LL;
int zero = 0;
int var_13 = 1434212875;
unsigned int var_14 = 4087948660U;
int var_15 = -978195717;
long long int var_16 = 8579243827212461062LL;
_Bool var_17 = (_Bool)0;
int var_18 = 1370701587;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8417340072730163ULL;
int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
_Bool arr_2 [17] ;
int arr_3 [17] ;
int arr_4 [17] [17] [17] ;
int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1808509868;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 11478824966320720612ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 128763108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -5993034;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 160826156;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
