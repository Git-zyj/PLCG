#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 341553465;
unsigned short var_3 = (unsigned short)13611;
unsigned short var_4 = (unsigned short)56095;
unsigned short var_5 = (unsigned short)36990;
unsigned short var_10 = (unsigned short)7516;
unsigned long long int var_11 = 3006034851342783577ULL;
unsigned short var_13 = (unsigned short)32530;
unsigned short var_14 = (unsigned short)16439;
int zero = 0;
unsigned long long int var_16 = 1110730770415591693ULL;
int var_17 = -1662403708;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)65214;
_Bool var_20 = (_Bool)0;
int var_21 = -740463181;
unsigned short arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)60433;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)58185;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
