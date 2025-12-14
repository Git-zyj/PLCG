#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1599712064;
signed char var_2 = (signed char)-61;
_Bool var_3 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_15 = -559814395644371039LL;
int zero = 0;
unsigned int var_18 = 3228965126U;
unsigned long long int var_19 = 8051435926953748053ULL;
int var_20 = -494255473;
unsigned short var_21 = (unsigned short)8199;
signed char var_22 = (signed char)-76;
unsigned short var_23 = (unsigned short)25;
unsigned short var_24 = (unsigned short)34635;
_Bool arr_3 [19] [19] ;
short arr_4 [19] [19] ;
signed char arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)26925 : (short)-10078;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-112 : (signed char)42;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
