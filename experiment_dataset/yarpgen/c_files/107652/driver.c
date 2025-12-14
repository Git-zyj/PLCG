#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2293653784U;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)26;
unsigned char var_3 = (unsigned char)26;
long long int var_5 = -677468714826986614LL;
unsigned char var_8 = (unsigned char)19;
signed char var_9 = (signed char)59;
short var_10 = (short)26806;
unsigned char var_12 = (unsigned char)71;
int zero = 0;
unsigned short var_17 = (unsigned short)62308;
unsigned int var_18 = 1972918479U;
unsigned short var_19 = (unsigned short)32049;
unsigned short var_20 = (unsigned short)53881;
unsigned int var_21 = 3391018704U;
long long int var_22 = 1330983007039956229LL;
unsigned long long int var_23 = 5469870517409274534ULL;
_Bool var_24 = (_Bool)0;
unsigned char arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned long long int arr_2 [21] [21] [21] ;
unsigned short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)128;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 12473336075991286651ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)3131;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
