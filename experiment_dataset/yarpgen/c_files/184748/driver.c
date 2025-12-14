#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17338;
unsigned int var_2 = 1717737731U;
signed char var_3 = (signed char)66;
unsigned int var_4 = 480083380U;
unsigned long long int var_5 = 3754514147891544225ULL;
int var_6 = -1647082047;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2380626204U;
unsigned int var_11 = 2779586417U;
unsigned char var_12 = (unsigned char)134;
_Bool var_13 = (_Bool)0;
unsigned short arr_1 [21] ;
unsigned int arr_2 [21] ;
unsigned short arr_3 [21] [21] [21] ;
unsigned long long int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)62389;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2825909037U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)30463;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 14933827947582743673ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
