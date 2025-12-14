#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3084127366U;
unsigned short var_2 = (unsigned short)56334;
unsigned long long int var_3 = 5000667601938189782ULL;
unsigned char var_5 = (unsigned char)195;
long long int var_6 = -1871953267766675998LL;
unsigned short var_8 = (unsigned short)29570;
unsigned int var_9 = 1882774546U;
signed char var_11 = (signed char)51;
unsigned short var_15 = (unsigned short)47447;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -8129509568877749977LL;
long long int var_18 = -359818565022624587LL;
unsigned char var_19 = (unsigned char)72;
_Bool var_20 = (_Bool)0;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned short arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
_Bool arr_6 [12] [12] ;
unsigned short arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2016826475U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 285473019U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)20581;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 456367150U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)20204;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
