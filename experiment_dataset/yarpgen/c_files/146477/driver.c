#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
_Bool var_2 = (_Bool)0;
short var_3 = (short)24117;
signed char var_5 = (signed char)68;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-38;
unsigned long long int var_10 = 298102834066429335ULL;
unsigned char var_11 = (unsigned char)222;
int zero = 0;
unsigned short var_12 = (unsigned short)45854;
unsigned long long int var_13 = 5759950521972554962ULL;
unsigned long long int var_14 = 1075599920082816575ULL;
unsigned long long int var_15 = 5243851499665394304ULL;
unsigned char var_16 = (unsigned char)208;
unsigned short var_17 = (unsigned short)14188;
short var_18 = (short)4881;
unsigned long long int var_19 = 947959035759177804ULL;
short arr_0 [24] [24] ;
unsigned short arr_1 [24] ;
signed char arr_2 [24] [24] ;
short arr_3 [24] ;
unsigned short arr_8 [11] [11] ;
short arr_5 [24] ;
unsigned int arr_6 [24] ;
short arr_7 [24] [24] ;
unsigned long long int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-20223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)57873;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-10153;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)28152;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)17549 : (short)-14024;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3671600882U : 2374217491U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-30085 : (short)-12251;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 5437835931624018259ULL : 17298873112831433842ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
