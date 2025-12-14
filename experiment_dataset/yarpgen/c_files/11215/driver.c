#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3929562775U;
unsigned int var_1 = 370049380U;
unsigned char var_3 = (unsigned char)161;
unsigned char var_4 = (unsigned char)244;
unsigned short var_6 = (unsigned short)45265;
signed char var_10 = (signed char)21;
unsigned long long int var_12 = 18191833090097814679ULL;
unsigned int var_14 = 1678799710U;
int zero = 0;
int var_15 = -532307183;
int var_16 = -2092673989;
unsigned int var_17 = 1675173409U;
unsigned int var_18 = 3228728250U;
unsigned int var_19 = 1161912408U;
unsigned short arr_2 [13] ;
unsigned char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29792 : (unsigned short)2155;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)61;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
