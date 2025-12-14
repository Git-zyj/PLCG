#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)119;
signed char var_3 = (signed char)-115;
unsigned int var_4 = 3569300408U;
unsigned long long int var_6 = 13535691742497467179ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -2692040551281881251LL;
int var_10 = -1354413124;
unsigned short var_13 = (unsigned short)20749;
int zero = 0;
short var_15 = (short)-10269;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)179;
long long int var_18 = 226647706508821389LL;
unsigned long long int var_19 = 11281156388328872887ULL;
signed char var_20 = (signed char)23;
unsigned char arr_0 [13] ;
unsigned char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)28;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
