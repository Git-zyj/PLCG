#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-26;
unsigned long long int var_3 = 4612270766390488397ULL;
long long int var_4 = 8480262138803061714LL;
unsigned short var_6 = (unsigned short)55459;
short var_8 = (short)11399;
unsigned long long int var_9 = 1340057861510975308ULL;
long long int var_11 = -5397080780056490575LL;
unsigned int var_14 = 1489995282U;
int zero = 0;
long long int var_17 = 5154859349460758677LL;
unsigned int var_18 = 3836917760U;
long long int var_19 = 8991212359569663476LL;
unsigned char var_20 = (unsigned char)176;
_Bool var_21 = (_Bool)1;
_Bool arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
unsigned long long int arr_2 [24] [24] [24] ;
short arr_3 [24] ;
unsigned int arr_4 [24] ;
short arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)17959;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 15744983296463476940ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-10344;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 3459988971U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)13490;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
