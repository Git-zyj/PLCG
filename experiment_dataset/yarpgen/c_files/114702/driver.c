#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)25;
int var_5 = -517761949;
long long int var_6 = -1267561949807488287LL;
int var_7 = -1708118395;
unsigned int var_8 = 2976151779U;
short var_9 = (short)-14555;
unsigned int var_10 = 278573188U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2290467763U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)31404;
int var_15 = -31357621;
unsigned int var_16 = 3935473581U;
int zero = 0;
unsigned char var_17 = (unsigned char)216;
short var_18 = (short)-26636;
unsigned short var_19 = (unsigned short)48163;
unsigned char var_20 = (unsigned char)224;
unsigned short var_21 = (unsigned short)47423;
long long int var_22 = 2458780376107082986LL;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
