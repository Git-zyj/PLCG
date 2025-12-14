#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7783456300283669136LL;
unsigned short var_8 = (unsigned short)4860;
signed char var_10 = (signed char)8;
unsigned char var_11 = (unsigned char)144;
unsigned long long int var_17 = 14148857000497119494ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)28274;
long long int var_19 = 91251176540162266LL;
long long int var_20 = -6505555715260996816LL;
signed char var_21 = (signed char)104;
unsigned long long int var_22 = 1449254704926344721ULL;
unsigned int arr_1 [15] ;
unsigned short arr_2 [15] [15] [15] ;
short arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 702997107U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)63881;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)14667;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
