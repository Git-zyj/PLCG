#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2610115959U;
long long int var_7 = 4665933332469874356LL;
long long int var_8 = -3972566754890189991LL;
int var_12 = -1397945473;
long long int var_13 = 6366950522507425218LL;
int var_14 = 70960515;
int zero = 0;
unsigned short var_17 = (unsigned short)6404;
unsigned short var_18 = (unsigned short)9000;
long long int var_19 = -5015579525781696016LL;
unsigned char var_20 = (unsigned char)90;
unsigned short var_21 = (unsigned short)26375;
long long int var_22 = 2366433534293536310LL;
int var_23 = -1612455386;
unsigned short var_24 = (unsigned short)48394;
unsigned short var_25 = (unsigned short)4214;
long long int var_26 = 8983090165932094819LL;
_Bool var_27 = (_Bool)0;
short var_28 = (short)-10400;
unsigned short arr_0 [14] ;
unsigned int arr_2 [14] ;
unsigned char arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)18064;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1006642302U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)118 : (unsigned char)154;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
