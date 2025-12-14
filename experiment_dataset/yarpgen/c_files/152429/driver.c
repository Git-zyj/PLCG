#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-64;
unsigned short var_4 = (unsigned short)62401;
signed char var_5 = (signed char)-29;
int var_6 = 1704402140;
int var_7 = 1563209494;
int var_8 = -956251217;
int var_9 = -1487352775;
long long int var_10 = -1096802282820189332LL;
unsigned long long int var_11 = 11671847502754974992ULL;
int zero = 0;
unsigned int var_12 = 209749440U;
unsigned int var_13 = 3805191988U;
signed char var_14 = (signed char)37;
_Bool arr_0 [15] ;
signed char arr_1 [15] [15] ;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
