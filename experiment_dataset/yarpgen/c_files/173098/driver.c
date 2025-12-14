#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 332194058;
long long int var_3 = -3963376262721197620LL;
signed char var_4 = (signed char)30;
unsigned long long int var_5 = 12655956245679449890ULL;
int var_9 = 1580001758;
unsigned int var_10 = 1814884597U;
int zero = 0;
short var_12 = (short)-13671;
unsigned char var_13 = (unsigned char)89;
unsigned short var_14 = (unsigned short)31876;
signed char var_15 = (signed char)-61;
unsigned int var_16 = 1917254022U;
unsigned long long int arr_0 [23] ;
unsigned int arr_1 [23] ;
int arr_3 [17] [17] ;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 12875187497960015403ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 206627490U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -31795399;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3086785753U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
