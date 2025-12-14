#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -168923986;
long long int var_5 = 8417229826298320346LL;
int var_7 = -1623459143;
short var_9 = (short)21177;
unsigned long long int var_10 = 13552657926454344416ULL;
unsigned char var_11 = (unsigned char)115;
signed char var_12 = (signed char)-35;
int zero = 0;
short var_13 = (short)-9007;
signed char var_14 = (signed char)-40;
long long int var_15 = -4154394863527734919LL;
_Bool var_16 = (_Bool)0;
unsigned int arr_0 [19] ;
unsigned long long int arr_1 [19] [19] ;
short arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2139337698U : 1445855195U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 7605936746465068335ULL : 7461174927304357248ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-969 : (short)17665;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
