#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24761;
int var_2 = 1341781660;
short var_3 = (short)-8912;
short var_4 = (short)-26441;
int var_5 = 1076168486;
int var_9 = -2108110780;
unsigned int var_10 = 1853850186U;
long long int var_11 = -1166803919149761867LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)4121;
short var_17 = (short)-8684;
unsigned short var_18 = (unsigned short)61976;
signed char var_19 = (signed char)47;
_Bool var_20 = (_Bool)1;
int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 1580480007;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
