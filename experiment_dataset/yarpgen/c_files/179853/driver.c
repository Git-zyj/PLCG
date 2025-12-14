#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1053004031U;
short var_4 = (short)-29752;
long long int var_6 = -256405370578881403LL;
int var_7 = 1718249068;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)69;
int var_12 = 1317003287;
unsigned long long int var_14 = 1003749896775861660ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)2537;
unsigned long long int var_17 = 14440807213217815973ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned short arr_1 [19] ;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)33231;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 7916430950267674842ULL;
}

void checksum() {
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
