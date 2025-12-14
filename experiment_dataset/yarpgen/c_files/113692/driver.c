#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1798538260;
unsigned short var_3 = (unsigned short)54106;
short var_6 = (short)-14569;
unsigned short var_7 = (unsigned short)10620;
signed char var_8 = (signed char)78;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)124;
short var_12 = (short)7618;
int zero = 0;
unsigned long long int var_14 = 7893661706319401801ULL;
unsigned short var_15 = (unsigned short)42801;
unsigned char var_16 = (unsigned char)126;
unsigned int var_17 = 3749730290U;
unsigned int var_18 = 1556907976U;
unsigned char var_19 = (unsigned char)244;
unsigned short arr_0 [25] ;
short arr_2 [25] [25] ;
int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)12523;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)18802;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1323770918;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
