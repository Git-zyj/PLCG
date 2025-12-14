#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
long long int var_1 = -1757366774303862979LL;
int var_2 = -876229768;
unsigned short var_3 = (unsigned short)26716;
unsigned short var_4 = (unsigned short)37638;
int var_6 = 184619176;
short var_7 = (short)-9579;
long long int var_8 = -9081595402708399256LL;
short var_9 = (short)18689;
int zero = 0;
unsigned long long int var_10 = 7844092872539573828ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)105;
unsigned int var_13 = 282248364U;
short arr_0 [24] [24] ;
_Bool arr_1 [24] ;
unsigned int arr_2 [24] ;
short arr_3 [24] ;
_Bool arr_5 [24] ;
unsigned short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)11419;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3386362256U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-13591;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)65220;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
