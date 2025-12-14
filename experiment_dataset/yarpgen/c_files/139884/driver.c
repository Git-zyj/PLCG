#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1397125404U;
unsigned int var_4 = 3601056851U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_8 = -1709022069;
unsigned short var_9 = (unsigned short)54890;
unsigned long long int var_10 = 16614988098807432087ULL;
unsigned int var_11 = 3207263811U;
int zero = 0;
signed char var_12 = (signed char)116;
int var_13 = 577744563;
unsigned int var_14 = 3943752149U;
unsigned int var_15 = 542073486U;
unsigned long long int var_16 = 8249184049440292496ULL;
long long int var_17 = -6736094463030054991LL;
_Bool var_18 = (_Bool)0;
unsigned short arr_4 [21] ;
signed char arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22944 : (unsigned short)49578;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)118;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
