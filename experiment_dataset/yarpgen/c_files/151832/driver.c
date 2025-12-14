#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64853;
unsigned long long int var_4 = 11575678676075708941ULL;
signed char var_7 = (signed char)-103;
unsigned long long int var_8 = 13119940282329793451ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-84;
unsigned short var_12 = (unsigned short)17113;
int var_14 = -400028181;
_Bool var_15 = (_Bool)0;
int var_17 = 1089650382;
int zero = 0;
short var_18 = (short)-21019;
unsigned short var_19 = (unsigned short)19911;
unsigned short var_20 = (unsigned short)45870;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)5313;
unsigned short var_23 = (unsigned short)24115;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-55;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
