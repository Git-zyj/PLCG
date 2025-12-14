#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)50183;
unsigned char var_7 = (unsigned char)230;
signed char var_11 = (signed char)-96;
unsigned char var_14 = (unsigned char)47;
unsigned char var_15 = (unsigned char)42;
int zero = 0;
unsigned long long int var_16 = 16056172723413889797ULL;
long long int var_17 = 2181390790071452100LL;
long long int var_18 = 3624760003704834696LL;
short var_19 = (short)-7214;
unsigned int arr_5 [20] ;
short arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 462145632U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)19635 : (short)-9392;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
