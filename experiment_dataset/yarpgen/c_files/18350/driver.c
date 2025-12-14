#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1781064752U;
unsigned short var_1 = (unsigned short)56258;
unsigned int var_4 = 2898123718U;
unsigned int var_5 = 2108425059U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 858951869U;
unsigned short var_8 = (unsigned short)59794;
unsigned int var_9 = 1988999716U;
int zero = 0;
unsigned int var_10 = 3002533615U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)51;
unsigned short arr_0 [12] [12] ;
signed char arr_1 [12] [12] ;
long long int arr_2 [12] ;
signed char arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 501868066534676137LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-62;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
