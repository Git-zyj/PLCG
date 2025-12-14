#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28239;
short var_4 = (short)-11596;
unsigned char var_6 = (unsigned char)230;
short var_11 = (short)5331;
unsigned long long int var_13 = 3970205249723317943ULL;
short var_15 = (short)15885;
short var_16 = (short)-8736;
short var_18 = (short)27072;
int zero = 0;
unsigned long long int var_20 = 13355545633322212616ULL;
int var_21 = 614759530;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 4153180221U;
unsigned int var_24 = 818044025U;
unsigned short var_25 = (unsigned short)30082;
unsigned short var_26 = (unsigned short)27287;
unsigned int var_27 = 1452878388U;
_Bool arr_0 [25] ;
long long int arr_2 [25] [25] ;
unsigned char arr_6 [19] ;
unsigned char arr_7 [19] ;
signed char arr_9 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -4865180194797320353LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-92 : (signed char)-122;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
