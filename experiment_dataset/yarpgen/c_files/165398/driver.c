#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4318889533828657808ULL;
long long int var_1 = -3038320533653692205LL;
unsigned short var_2 = (unsigned short)56615;
int var_3 = 1467181557;
unsigned short var_4 = (unsigned short)4902;
int var_5 = -1937066551;
unsigned long long int var_6 = 11405210902252604219ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)122;
short var_9 = (short)18668;
unsigned char var_10 = (unsigned char)18;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5049686941786525620ULL;
int var_13 = -1671064848;
unsigned int arr_0 [25] ;
long long int arr_1 [25] ;
_Bool arr_2 [25] ;
unsigned short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3927236964U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6503554527877850082LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)38585;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
