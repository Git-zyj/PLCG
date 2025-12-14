#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6329395276878558740LL;
short var_3 = (short)-8541;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 15629587465789454274ULL;
unsigned int var_8 = 4282649271U;
unsigned short var_10 = (unsigned short)64276;
signed char var_13 = (signed char)-18;
short var_15 = (short)-24143;
int zero = 0;
long long int var_16 = -9068943129479110599LL;
unsigned short var_17 = (unsigned short)41369;
unsigned long long int var_18 = 5407742113059890323ULL;
unsigned int var_19 = 623781612U;
short var_20 = (short)-17872;
unsigned short var_21 = (unsigned short)63245;
signed char var_22 = (signed char)78;
unsigned int arr_0 [15] ;
unsigned int arr_1 [15] ;
_Bool arr_2 [15] ;
short arr_5 [15] [15] ;
unsigned long long int arr_3 [15] ;
unsigned long long int arr_8 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2729989928U : 3211614685U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2437823141U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-19956;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2741153841438284471ULL : 14025194224413190705ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 18357253897520328715ULL : 5885665121707198562ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
