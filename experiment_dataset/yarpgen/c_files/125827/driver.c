#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4289742038619107496LL;
unsigned int var_1 = 3303309686U;
unsigned int var_2 = 2009135953U;
unsigned int var_3 = 3002883277U;
unsigned int var_4 = 554699993U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 352498518U;
unsigned short var_7 = (unsigned short)23121;
short var_8 = (short)-7128;
unsigned short var_10 = (unsigned short)51448;
unsigned int var_11 = 441015852U;
unsigned int var_12 = 809238079U;
int zero = 0;
short var_13 = (short)16864;
signed char var_14 = (signed char)104;
int var_15 = -638935776;
unsigned int var_16 = 780598594U;
unsigned char var_17 = (unsigned char)155;
long long int arr_4 [17] ;
unsigned int arr_5 [17] [17] ;
long long int arr_6 [17] [17] ;
unsigned char arr_10 [17] [17] [17] ;
unsigned short arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -8692259351169510857LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 922405669U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = -4920649221268809536LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)16371;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
