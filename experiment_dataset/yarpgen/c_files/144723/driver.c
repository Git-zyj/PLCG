#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36007;
int var_1 = 249669601;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)95;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2551602465U;
unsigned int var_7 = 1029620401U;
unsigned char var_8 = (unsigned char)21;
unsigned int var_9 = 1299690477U;
unsigned int var_10 = 1602109164U;
short var_11 = (short)13125;
unsigned long long int var_12 = 17943202915914947036ULL;
int zero = 0;
unsigned int var_13 = 1358090843U;
unsigned char var_14 = (unsigned char)146;
unsigned int var_15 = 3146134944U;
_Bool var_16 = (_Bool)1;
int arr_2 [19] [19] ;
int arr_3 [19] [19] [19] ;
unsigned short arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 496520934 : 1623167872;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1727915761;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5974 : (unsigned short)9105;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
