#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_4 = 2396249568454252272LL;
unsigned long long int var_8 = 10214533587534988991ULL;
unsigned long long int var_9 = 11642479336139504444ULL;
int var_11 = 1938290598;
int var_12 = 1557010792;
unsigned int var_13 = 477664680U;
unsigned long long int var_14 = 5798555211603385253ULL;
unsigned long long int var_15 = 11340976361451684767ULL;
long long int var_16 = 1550112807258487644LL;
unsigned long long int var_19 = 1934525733459042462ULL;
int zero = 0;
int var_20 = -1234928799;
unsigned long long int var_21 = 9302896041898658651ULL;
_Bool var_22 = (_Bool)0;
unsigned char arr_1 [10] ;
signed char arr_2 [10] ;
signed char arr_3 [10] [10] ;
short arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)10481;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
