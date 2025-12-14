#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 6272680534070952982ULL;
unsigned long long int var_4 = 17863797653432810886ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -680232845183029166LL;
unsigned short var_8 = (unsigned short)18123;
long long int var_9 = 6954919497402908313LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 14576073580747016571ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)12678;
unsigned long long int var_15 = 15919799949333200046ULL;
unsigned short arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)12209;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
