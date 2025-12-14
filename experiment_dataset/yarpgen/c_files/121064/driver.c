#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1482170826;
unsigned long long int var_2 = 17757228530499282656ULL;
int var_4 = 1585459197;
short var_5 = (short)4107;
short var_6 = (short)-16868;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)3389;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 3740912661451031444LL;
unsigned int var_16 = 1479308827U;
unsigned char var_17 = (unsigned char)210;
signed char var_18 = (signed char)-89;
signed char arr_0 [12] ;
int arr_1 [12] ;
long long int arr_2 [12] ;
unsigned char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 146554671;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6552617634674607780LL : 2699501906321474827LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)40 : (unsigned char)57;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
