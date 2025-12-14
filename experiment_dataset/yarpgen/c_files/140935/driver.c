#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14070525412211671978ULL;
unsigned char var_2 = (unsigned char)187;
short var_3 = (short)-13011;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)29679;
unsigned short var_6 = (unsigned short)40920;
unsigned long long int var_7 = 1234141189409506619ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-943;
short var_11 = (short)-30008;
int zero = 0;
unsigned char var_12 = (unsigned char)173;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)2981;
unsigned int var_16 = 4189299078U;
unsigned long long int var_17 = 223754171451524809ULL;
unsigned short var_18 = (unsigned short)53235;
_Bool var_19 = (_Bool)0;
unsigned char arr_3 [25] ;
_Bool arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
