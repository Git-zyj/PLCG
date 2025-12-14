#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54625;
long long int var_9 = -3560019335081020172LL;
unsigned short var_11 = (unsigned short)46304;
unsigned int var_12 = 2315802785U;
unsigned short var_13 = (unsigned short)57935;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 17126111035308995794ULL;
short var_17 = (short)-30210;
unsigned char var_18 = (unsigned char)119;
long long int var_19 = -1885084316894269828LL;
short arr_0 [17] ;
unsigned long long int arr_3 [17] [17] ;
int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)10524;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 16909986727644148269ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2064563521;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
