#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4139866760U;
signed char var_1 = (signed char)30;
signed char var_2 = (signed char)30;
long long int var_3 = 5758633097957209729LL;
signed char var_4 = (signed char)115;
signed char var_7 = (signed char)-120;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3383581424U;
int zero = 0;
long long int var_11 = 2202471751671260567LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7946316028179991325LL;
unsigned int var_14 = 1536001757U;
int var_15 = -1587201462;
short arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-10206 : (short)-23853;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
