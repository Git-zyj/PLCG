#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12470817034696075077ULL;
short var_3 = (short)4888;
long long int var_4 = -3308859778655242757LL;
long long int var_5 = -6163035311797104724LL;
_Bool var_8 = (_Bool)0;
int var_9 = 506351332;
int var_11 = 1829392871;
int zero = 0;
long long int var_14 = 3659205799770559416LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)105;
long long int var_17 = -2303677740371116757LL;
long long int var_18 = 7843598342402365711LL;
unsigned int var_19 = 4116315693U;
_Bool arr_0 [20] ;
unsigned int arr_1 [20] ;
short arr_3 [20] [20] ;
unsigned short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2674735337U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-2784;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46084 : (unsigned short)28131;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
