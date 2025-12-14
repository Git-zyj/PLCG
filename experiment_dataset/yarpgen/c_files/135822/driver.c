#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4138;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_9 = 3176615161418706123LL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)23632;
int zero = 0;
unsigned char var_12 = (unsigned char)233;
int var_13 = -1522169723;
unsigned int var_14 = 2639189484U;
int var_15 = 214768069;
short arr_0 [16] ;
signed char arr_1 [16] ;
_Bool arr_3 [24] ;
int arr_4 [24] [24] ;
unsigned short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-16612 : (short)-19202;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 1035719238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41985 : (unsigned short)6127;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
