#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31438;
unsigned int var_2 = 231985906U;
unsigned int var_4 = 1199824296U;
unsigned int var_5 = 1420533290U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)112;
unsigned short var_10 = (unsigned short)34416;
int zero = 0;
unsigned long long int var_11 = 10887045152689773758ULL;
short var_12 = (short)-26295;
unsigned long long int var_13 = 3453192309495556832ULL;
short var_14 = (short)11524;
signed char var_15 = (signed char)-65;
long long int var_16 = 453637955097185983LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6486048428417565305ULL;
short var_19 = (short)-28859;
long long int var_20 = 7921269134902624569LL;
unsigned int arr_3 [20] ;
_Bool arr_4 [20] [20] ;
long long int arr_5 [20] [20] ;
unsigned short arr_10 [20] ;
short arr_11 [20] [20] ;
long long int arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 700471019U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -5761995147200819117LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)14945;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (short)20065;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = -631401094767069938LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
