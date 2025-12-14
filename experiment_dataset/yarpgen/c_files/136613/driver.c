#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4234704980U;
int var_1 = -727528905;
unsigned int var_3 = 3694060382U;
unsigned short var_6 = (unsigned short)42;
signed char var_7 = (signed char)-115;
long long int var_8 = 6788229167978121811LL;
short var_10 = (short)-23191;
_Bool var_11 = (_Bool)0;
short var_18 = (short)-4294;
int zero = 0;
int var_19 = -1744099950;
int var_20 = -727404615;
short var_21 = (short)8978;
unsigned short var_22 = (unsigned short)51014;
unsigned short var_23 = (unsigned short)51770;
signed char arr_1 [10] [10] ;
unsigned short arr_2 [10] [10] ;
short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)14263;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)1295;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
