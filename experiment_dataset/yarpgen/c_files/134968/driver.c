#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3850;
long long int var_2 = 7549150330435245369LL;
unsigned char var_5 = (unsigned char)255;
unsigned long long int var_7 = 16103390512886861508ULL;
short var_10 = (short)21030;
unsigned short var_11 = (unsigned short)13691;
int zero = 0;
unsigned int var_15 = 4265189704U;
unsigned short var_16 = (unsigned short)28967;
unsigned short var_17 = (unsigned short)18944;
unsigned int var_18 = 1408098890U;
signed char var_19 = (signed char)60;
unsigned short var_20 = (unsigned short)11217;
unsigned int arr_1 [18] ;
signed char arr_2 [18] ;
_Bool arr_3 [18] [18] ;
short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 753551272U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-30571 : (short)-8403;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
