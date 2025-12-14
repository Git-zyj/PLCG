#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3668863064U;
long long int var_3 = -8598750909613818241LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = -3562752255140425219LL;
unsigned int var_7 = 3295097433U;
int var_11 = -1015191674;
unsigned int var_12 = 250236467U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-17751;
int zero = 0;
int var_16 = 955637411;
unsigned int var_17 = 2082193836U;
long long int var_18 = 8542569964448116039LL;
short arr_1 [13] ;
signed char arr_3 [13] ;
signed char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)20771;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-39;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
