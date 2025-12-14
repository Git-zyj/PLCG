#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1203152589;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 1163868901108664470ULL;
unsigned char var_3 = (unsigned char)189;
signed char var_4 = (signed char)-62;
unsigned long long int var_5 = 2002275996794138088ULL;
unsigned long long int var_6 = 14916299159880332467ULL;
unsigned long long int var_7 = 3288517584418769174ULL;
unsigned short var_8 = (unsigned short)41776;
signed char var_9 = (signed char)-38;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)28041;
unsigned long long int var_12 = 5707583509472393291ULL;
int zero = 0;
unsigned long long int var_13 = 1057888453735286763ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)110;
unsigned long long int var_16 = 10402117847203467676ULL;
signed char var_17 = (signed char)-104;
int var_18 = 1620621237;
unsigned int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1527875419U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
