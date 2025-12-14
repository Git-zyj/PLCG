#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8274797710585656523LL;
unsigned long long int var_4 = 11822207553138141642ULL;
unsigned char var_5 = (unsigned char)151;
short var_9 = (short)-23348;
long long int var_10 = -4754696254821576248LL;
long long int var_11 = 5947047621652816489LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)194;
signed char var_17 = (signed char)30;
short var_18 = (short)-21295;
short var_19 = (short)4508;
short arr_2 [19] ;
unsigned int arr_5 [19] [19] ;
unsigned char arr_6 [19] ;
int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)29606 : (short)22146;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 4002160869U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)143 : (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -303542035 : 2085915919;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
