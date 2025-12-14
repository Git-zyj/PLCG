#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4156;
long long int var_2 = -1917767535773215398LL;
long long int var_3 = 7010516541944077328LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)95;
short var_9 = (short)-28432;
unsigned char var_11 = (unsigned char)155;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)1044;
int zero = 0;
unsigned long long int var_17 = 8789227045966127073ULL;
int var_18 = 2040190822;
long long int var_19 = -6997247488906775528LL;
short var_20 = (short)-2068;
short var_21 = (short)15257;
unsigned long long int var_22 = 15771392465311210653ULL;
unsigned char var_23 = (unsigned char)238;
int var_24 = 1261156355;
_Bool arr_0 [16] ;
int arr_1 [16] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_7 [14] [14] [14] ;
unsigned char arr_16 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1381379167;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 11731415322749262973ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2770378005582843302ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)230;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
