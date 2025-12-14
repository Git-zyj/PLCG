#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15483;
_Bool var_1 = (_Bool)0;
int var_2 = -2133844169;
unsigned short var_4 = (unsigned short)15881;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_11 = -1853086137;
long long int var_14 = -1451394631100074528LL;
signed char var_15 = (signed char)21;
int zero = 0;
signed char var_17 = (signed char)-24;
short var_18 = (short)-25705;
unsigned short var_19 = (unsigned short)32161;
signed char var_20 = (signed char)50;
_Bool var_21 = (_Bool)0;
int var_22 = -1459773262;
_Bool arr_0 [23] ;
unsigned short arr_8 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)51810 : (unsigned short)45231;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
