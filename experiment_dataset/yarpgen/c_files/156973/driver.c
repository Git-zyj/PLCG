#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15997;
long long int var_1 = -1681615183288686684LL;
unsigned long long int var_3 = 9066757017960543683ULL;
signed char var_4 = (signed char)-32;
unsigned long long int var_5 = 12683518057618352114ULL;
_Bool var_6 = (_Bool)1;
int var_11 = 1379890905;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)124;
unsigned short var_14 = (unsigned short)27603;
signed char var_15 = (signed char)-93;
unsigned short var_16 = (unsigned short)34099;
unsigned short var_17 = (unsigned short)38419;
unsigned char arr_0 [20] [20] ;
long long int arr_1 [20] [20] ;
long long int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 261721386138357008LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 9168989893455154431LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
