#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6289;
unsigned long long int var_1 = 14856435996049606131ULL;
unsigned long long int var_4 = 13133068150113103006ULL;
unsigned int var_5 = 741097201U;
unsigned long long int var_7 = 18078300219999724556ULL;
unsigned int var_10 = 2299552468U;
unsigned long long int var_11 = 16077140359963563224ULL;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 11686506113355937377ULL;
unsigned int var_17 = 1618425562U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 416942486521322521ULL;
unsigned long long int var_20 = 10861300275824959459ULL;
_Bool arr_0 [22] ;
_Bool arr_3 [22] ;
unsigned char arr_4 [22] ;
unsigned long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 13896780992070980121ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
