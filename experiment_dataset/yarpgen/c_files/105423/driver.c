#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52658;
short var_3 = (short)-13456;
unsigned long long int var_7 = 649622789364985850ULL;
signed char var_9 = (signed char)-28;
signed char var_10 = (signed char)-83;
unsigned int var_11 = 4208192108U;
unsigned int var_12 = 1763003992U;
unsigned long long int var_13 = 4906450121844985145ULL;
unsigned int var_15 = 2391580239U;
long long int var_17 = 2291922964076271293LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2381241208U;
unsigned char var_20 = (unsigned char)120;
unsigned long long int var_21 = 7910752126710256576ULL;
signed char var_22 = (signed char)-26;
long long int var_23 = 5878296843812543375LL;
unsigned char arr_1 [13] ;
short arr_2 [13] ;
short arr_3 [13] ;
_Bool arr_4 [13] [13] ;
signed char arr_7 [13] [13] [13] [13] ;
signed char arr_9 [13] [13] [13] [13] ;
unsigned char arr_10 [13] ;
unsigned short arr_11 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)5173;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)2511;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)23095;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
