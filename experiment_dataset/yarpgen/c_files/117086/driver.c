#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2114106127U;
unsigned char var_1 = (unsigned char)174;
unsigned long long int var_2 = 10439068274773579198ULL;
unsigned char var_3 = (unsigned char)92;
signed char var_4 = (signed char)-36;
unsigned int var_7 = 2411898606U;
unsigned short var_8 = (unsigned short)7360;
unsigned long long int var_9 = 4120043550326280805ULL;
long long int var_11 = -5670684035024778338LL;
int zero = 0;
unsigned int var_15 = 871571232U;
unsigned short var_16 = (unsigned short)21754;
unsigned int var_17 = 2678033862U;
unsigned int var_18 = 2703460281U;
_Bool var_19 = (_Bool)0;
int var_20 = 2116621112;
long long int arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
signed char arr_2 [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
unsigned int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -7841760686713926797LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 4092159670U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 14967360407648002886ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1276119000U : 3711680315U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
