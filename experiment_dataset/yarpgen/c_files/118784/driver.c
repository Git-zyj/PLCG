#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6060249321029096740LL;
unsigned long long int var_1 = 16441011713720739577ULL;
short var_5 = (short)-21714;
unsigned short var_7 = (unsigned short)33956;
long long int var_8 = -8809448136141800623LL;
unsigned long long int var_9 = 6218412254129429908ULL;
unsigned int var_10 = 879423319U;
signed char var_12 = (signed char)-102;
int var_13 = -1765535278;
int zero = 0;
unsigned short var_15 = (unsigned short)16113;
signed char var_16 = (signed char)28;
short var_17 = (short)-258;
signed char var_18 = (signed char)63;
unsigned char arr_3 [10] ;
unsigned long long int arr_7 [14] [14] ;
signed char arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 1464249438955426546ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)104;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
