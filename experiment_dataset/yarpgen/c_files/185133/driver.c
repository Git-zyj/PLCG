#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 586307457;
long long int var_2 = -5987626820419890475LL;
unsigned long long int var_6 = 2732868962759331045ULL;
signed char var_8 = (signed char)67;
int var_11 = 1826482161;
long long int var_13 = 2379096460486970750LL;
unsigned int var_15 = 2970779430U;
int zero = 0;
unsigned char var_16 = (unsigned char)211;
unsigned char var_17 = (unsigned char)93;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5471938549747234154LL;
unsigned long long int var_20 = 12446394942973806596ULL;
unsigned char var_21 = (unsigned char)85;
int var_22 = 1558822418;
signed char var_23 = (signed char)99;
_Bool arr_0 [25] [25] ;
long long int arr_1 [25] ;
unsigned char arr_2 [15] ;
unsigned char arr_3 [15] [15] ;
unsigned int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -217265600507269105LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 2771535226U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
