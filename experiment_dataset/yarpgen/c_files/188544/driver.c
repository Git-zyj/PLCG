#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)235;
unsigned char var_5 = (unsigned char)155;
long long int var_6 = -6146338422692385639LL;
unsigned char var_9 = (unsigned char)199;
int var_10 = -241295467;
unsigned char var_11 = (unsigned char)213;
unsigned short var_12 = (unsigned short)19441;
_Bool var_14 = (_Bool)1;
unsigned short var_18 = (unsigned short)54169;
int zero = 0;
signed char var_19 = (signed char)18;
unsigned int var_20 = 542041198U;
unsigned short var_21 = (unsigned short)3910;
unsigned char var_22 = (unsigned char)130;
unsigned int var_23 = 3420001575U;
unsigned char var_24 = (unsigned char)89;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-1;
int var_27 = 1191590291;
unsigned long long int arr_1 [12] [12] ;
signed char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 2525552306715117169ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)6;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
