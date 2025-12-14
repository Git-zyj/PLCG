#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1626349670U;
int var_1 = -1991408913;
int var_3 = 401570325;
short var_4 = (short)31018;
signed char var_5 = (signed char)-36;
unsigned char var_6 = (unsigned char)152;
unsigned long long int var_7 = 4792620852647045843ULL;
int var_9 = -317703540;
unsigned char var_10 = (unsigned char)99;
unsigned int var_11 = 2471481216U;
unsigned short var_12 = (unsigned short)60440;
signed char var_15 = (signed char)-101;
unsigned char var_16 = (unsigned char)27;
unsigned char var_17 = (unsigned char)28;
int zero = 0;
unsigned long long int var_18 = 13061591283063607847ULL;
unsigned char var_19 = (unsigned char)74;
unsigned int var_20 = 1737798137U;
int var_21 = -1179335519;
signed char arr_0 [11] ;
int arr_3 [11] ;
long long int arr_5 [11] [11] ;
_Bool arr_6 [11] [11] ;
long long int arr_7 [11] [11] ;
unsigned char arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 171258923;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1387179293546026394LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 6228664934625441571LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)229;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
