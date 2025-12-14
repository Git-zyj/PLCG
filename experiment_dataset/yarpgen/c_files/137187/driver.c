#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1015761635730396151LL;
long long int var_4 = -9159025863161450651LL;
_Bool var_5 = (_Bool)1;
short var_8 = (short)14948;
long long int var_16 = -5126892159211834750LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8130891936425847748ULL;
long long int var_20 = 4418930156281541235LL;
signed char arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
signed char arr_3 [18] ;
unsigned short arr_4 [18] [18] ;
int arr_5 [18] ;
signed char arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2605919859U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)63614;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -1813153540;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)13;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
