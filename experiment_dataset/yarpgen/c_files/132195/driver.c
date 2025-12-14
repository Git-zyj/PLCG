#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24814;
_Bool var_1 = (_Bool)0;
long long int var_2 = 4942236217799329809LL;
signed char var_3 = (signed char)-25;
unsigned char var_4 = (unsigned char)245;
short var_5 = (short)-28616;
int var_6 = 1011875083;
signed char var_8 = (signed char)27;
unsigned short var_9 = (unsigned short)3553;
unsigned char var_10 = (unsigned char)56;
unsigned short var_12 = (unsigned short)23613;
unsigned char var_14 = (unsigned char)212;
int zero = 0;
signed char var_15 = (signed char)27;
short var_16 = (short)-30777;
unsigned long long int var_17 = 2114956816354587305ULL;
unsigned char var_18 = (unsigned char)124;
unsigned short var_19 = (unsigned short)26976;
unsigned char var_20 = (unsigned char)134;
signed char var_21 = (signed char)-116;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)253;
unsigned char arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
_Bool arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)176;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
