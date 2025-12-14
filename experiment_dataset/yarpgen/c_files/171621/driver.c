#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -8728813694990805154LL;
short var_5 = (short)-22557;
unsigned short var_9 = (unsigned short)62767;
unsigned long long int var_11 = 14409796351918399081ULL;
int var_13 = -772106271;
int zero = 0;
unsigned short var_15 = (unsigned short)36711;
_Bool var_16 = (_Bool)1;
int var_17 = 593338660;
unsigned int var_18 = 2947901011U;
unsigned short var_19 = (unsigned short)18895;
signed char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-4;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
