#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7639150554677853879LL;
long long int var_2 = -2970575102143946316LL;
unsigned char var_3 = (unsigned char)222;
long long int var_5 = 7168124299995831269LL;
int var_7 = -724649084;
long long int var_10 = -3361214884519543810LL;
int var_11 = -974495553;
signed char var_13 = (signed char)42;
short var_16 = (short)21100;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1526097447;
int var_21 = 2115332050;
unsigned int var_22 = 501991726U;
_Bool arr_1 [16] ;
_Bool arr_2 [16] ;
unsigned long long int arr_3 [16] [16] ;
long long int arr_4 [16] [16] [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 5240896260650294882ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 158887015445998231LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)29258;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
