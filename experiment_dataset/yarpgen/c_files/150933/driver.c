#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6935;
int var_1 = 2463602;
_Bool var_4 = (_Bool)0;
int var_5 = -1225696246;
unsigned int var_13 = 3992034470U;
int zero = 0;
long long int var_14 = 944314889273045427LL;
short var_15 = (short)17721;
long long int var_16 = 9147292431075490093LL;
int var_17 = -1599992852;
short var_18 = (short)-11626;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-66;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
