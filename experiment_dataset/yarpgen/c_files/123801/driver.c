#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1686;
short var_2 = (short)15366;
short var_3 = (short)-26269;
signed char var_5 = (signed char)108;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 4148175495U;
unsigned int var_12 = 299052275U;
long long int var_13 = 3521810851955656443LL;
unsigned char var_14 = (unsigned char)72;
short var_15 = (short)-20064;
signed char var_16 = (signed char)-82;
unsigned int var_17 = 2166135808U;
unsigned int var_19 = 3090422995U;
int zero = 0;
unsigned int var_20 = 578169589U;
signed char var_21 = (signed char)-47;
long long int var_22 = 8151232949185989156LL;
long long int var_23 = 2779425070145082436LL;
unsigned int var_24 = 1639983253U;
long long int var_25 = 8517501871331046449LL;
unsigned long long int var_26 = 10120920781870113479ULL;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 692615901U;
unsigned char arr_0 [21] [21] ;
long long int arr_2 [21] ;
_Bool arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3776729566543012972LL : 3822620933768972499LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
