#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1850040990;
unsigned int var_2 = 3394719256U;
signed char var_3 = (signed char)49;
unsigned int var_4 = 1501745461U;
signed char var_5 = (signed char)-30;
int var_6 = -1625783146;
unsigned short var_7 = (unsigned short)41533;
long long int var_9 = -6064241818131725226LL;
unsigned int var_12 = 636519878U;
int zero = 0;
unsigned long long int var_13 = 9008019754037537456ULL;
unsigned short var_14 = (unsigned short)5561;
signed char var_15 = (signed char)47;
unsigned long long int var_16 = 11789788329977865121ULL;
unsigned short arr_0 [19] ;
unsigned short arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)12909;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)62864;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
