#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16316;
signed char var_3 = (signed char)-87;
long long int var_4 = 8676557807729283650LL;
unsigned short var_5 = (unsigned short)38406;
unsigned char var_6 = (unsigned char)56;
long long int var_7 = 4038210220396431732LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 10876821012942506955ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_18 = (unsigned short)39178;
int zero = 0;
int var_19 = -463433556;
int var_20 = 1811340654;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 4163284917110499007ULL;
long long int var_23 = 8614925927963830831LL;
unsigned long long int var_24 = 8707299573955409876ULL;
int arr_0 [21] ;
signed char arr_2 [21] ;
unsigned short arr_6 [21] [21] [21] ;
long long int arr_10 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 852238981;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)20450;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = -8899134486650838446LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
