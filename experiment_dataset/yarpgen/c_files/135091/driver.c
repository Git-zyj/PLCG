#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned int var_3 = 4067439780U;
unsigned short var_4 = (unsigned short)60417;
unsigned short var_8 = (unsigned short)61049;
unsigned short var_9 = (unsigned short)9799;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 650865266901075112ULL;
unsigned char var_12 = (unsigned char)116;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -150650132;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8903280068667714272LL;
unsigned int var_17 = 3101162173U;
signed char arr_2 [11] ;
_Bool arr_3 [11] ;
long long int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 7269514500267318647LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
