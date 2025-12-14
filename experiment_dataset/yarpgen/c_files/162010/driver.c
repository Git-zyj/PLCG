#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2350723950515557000LL;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)15311;
int zero = 0;
unsigned short var_11 = (unsigned short)6394;
unsigned char var_12 = (unsigned char)12;
unsigned long long int var_13 = 17622044526307043394ULL;
long long int var_14 = 4997560591522559837LL;
signed char var_15 = (signed char)-29;
unsigned short var_16 = (unsigned short)23366;
long long int var_17 = -5989983079161154029LL;
long long int arr_2 [24] [24] ;
unsigned short arr_3 [24] ;
_Bool arr_4 [24] ;
unsigned long long int arr_8 [12] ;
_Bool arr_10 [12] [12] [12] ;
unsigned short arr_12 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -4810938318439418017LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)45944;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 384656904153296640ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16498 : (unsigned short)28794;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
