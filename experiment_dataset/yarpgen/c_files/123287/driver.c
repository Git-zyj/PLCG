#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64805;
_Bool var_1 = (_Bool)1;
unsigned int var_7 = 48591330U;
signed char var_9 = (signed char)13;
long long int var_12 = -9109608024733470395LL;
long long int var_14 = 8727409588559157768LL;
int zero = 0;
unsigned long long int var_16 = 7693294576856496676ULL;
unsigned short var_17 = (unsigned short)50424;
signed char var_18 = (signed char)37;
unsigned long long int var_19 = 13572770184773323984ULL;
unsigned char var_20 = (unsigned char)34;
signed char var_21 = (signed char)13;
signed char var_22 = (signed char)-45;
_Bool arr_2 [20] [20] ;
int arr_3 [20] [20] ;
unsigned long long int arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = -184862219;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 508138619316109909ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
