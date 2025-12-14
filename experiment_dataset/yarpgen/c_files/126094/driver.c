#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -6840426068722753272LL;
int var_2 = 580892877;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)254;
short var_7 = (short)-18726;
signed char var_8 = (signed char)71;
long long int var_9 = -3392017806800397797LL;
unsigned char var_10 = (unsigned char)5;
signed char var_11 = (signed char)110;
short var_13 = (short)-20393;
int var_14 = 100224504;
signed char var_16 = (signed char)78;
unsigned char var_17 = (unsigned char)102;
unsigned long long int var_18 = 7408471731893193027ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 1375516790487008453ULL;
unsigned int var_21 = 3230129274U;
unsigned short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)14076 : (unsigned short)56831;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
