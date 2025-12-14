#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
signed char var_1 = (signed char)16;
int var_2 = -1484649812;
long long int var_6 = -5981380422309843248LL;
signed char var_8 = (signed char)36;
int var_9 = 817141459;
unsigned short var_13 = (unsigned short)27167;
signed char var_15 = (signed char)92;
int zero = 0;
long long int var_16 = 1310097675787999968LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = 416704270;
unsigned int var_20 = 3984291066U;
long long int var_21 = 4012079458186713114LL;
long long int arr_5 [25] ;
unsigned char arr_4 [22] ;
unsigned short arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 7708019074310843694LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)168 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)19364;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
