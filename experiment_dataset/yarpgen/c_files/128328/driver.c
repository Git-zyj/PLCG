#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)614;
unsigned long long int var_4 = 17349933278020741035ULL;
signed char var_5 = (signed char)-74;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)30;
unsigned short var_10 = (unsigned short)27510;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)102;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)21453;
unsigned long long int var_16 = 8601133929992737610ULL;
int zero = 0;
long long int var_17 = 2589895904412617522LL;
signed char var_18 = (signed char)122;
signed char var_19 = (signed char)125;
long long int var_20 = -5481651828819056984LL;
_Bool arr_0 [14] [14] ;
short arr_1 [14] ;
signed char arr_2 [14] ;
unsigned long long int arr_3 [14] ;
long long int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)28106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 922464351336640017ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -7689945529897922468LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
