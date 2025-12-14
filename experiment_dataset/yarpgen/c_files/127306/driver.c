#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3957950526U;
unsigned int var_1 = 1669809811U;
signed char var_3 = (signed char)-68;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_8 = -261313206;
long long int var_9 = -9057185152725278319LL;
unsigned long long int var_11 = 3737002438459983168ULL;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)27;
unsigned long long int var_18 = 14871615385333203409ULL;
unsigned short var_19 = (unsigned short)61922;
signed char var_20 = (signed char)-116;
unsigned int var_21 = 1559915979U;
unsigned long long int var_22 = 17376005050095590612ULL;
_Bool arr_2 [19] [19] ;
unsigned short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65288 : (unsigned short)54368;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
