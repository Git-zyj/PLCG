#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5896;
long long int var_9 = -8436043496308543496LL;
int zero = 0;
long long int var_12 = -7283315747401864556LL;
unsigned short var_13 = (unsigned short)40398;
int var_14 = 2035349296;
int var_15 = 720596498;
unsigned int var_16 = 3957493099U;
unsigned short var_17 = (unsigned short)29040;
int var_18 = -126404664;
unsigned short arr_0 [24] ;
unsigned short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)37213;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)9497;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
