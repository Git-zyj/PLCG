#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
unsigned long long int var_2 = 8866647759096703296ULL;
unsigned short var_3 = (unsigned short)62513;
unsigned int var_4 = 764381409U;
unsigned long long int var_5 = 2914666115629537203ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)23617;
unsigned short var_8 = (unsigned short)41205;
long long int var_11 = 6184683420538870850LL;
unsigned short var_12 = (unsigned short)38018;
unsigned int var_13 = 2382453821U;
int zero = 0;
short var_14 = (short)3092;
unsigned long long int var_15 = 10902883549913318127ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)47930;
unsigned short var_18 = (unsigned short)17428;
unsigned char var_19 = (unsigned char)180;
unsigned int var_20 = 3280803548U;
short var_21 = (short)23998;
unsigned short arr_3 [13] ;
_Bool arr_6 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)26639;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
