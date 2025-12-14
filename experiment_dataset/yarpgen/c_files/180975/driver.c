#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3102337784U;
_Bool var_2 = (_Bool)0;
long long int var_3 = -9158075496157285356LL;
signed char var_4 = (signed char)55;
long long int var_10 = -9175462691668832949LL;
int zero = 0;
unsigned char var_12 = (unsigned char)2;
short var_13 = (short)2788;
short var_14 = (short)-18507;
int var_15 = 352291760;
short arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-26798;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 7768115183650946404LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
