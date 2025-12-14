#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1811969470U;
long long int var_2 = -7242527742270422771LL;
long long int var_3 = -8252713697255464998LL;
unsigned int var_4 = 2010361753U;
unsigned int var_7 = 3000467992U;
int var_10 = -1621993759;
unsigned short var_12 = (unsigned short)22136;
unsigned short var_13 = (unsigned short)33933;
unsigned int var_14 = 2241239368U;
unsigned long long int var_15 = 1933752434494587494ULL;
int zero = 0;
unsigned int var_16 = 4118252642U;
int var_17 = -993434963;
signed char var_18 = (signed char)-13;
short var_19 = (short)-16065;
unsigned short var_20 = (unsigned short)47625;
int var_21 = -1219386289;
int var_22 = 1310380591;
long long int var_23 = -6654781428652311518LL;
int arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
int arr_3 [24] ;
int arr_5 [22] ;
unsigned char arr_9 [22] [22] ;
_Bool arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1063038769;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2771337760U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)4434;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1138187164;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 477636833;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
