#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3698892202U;
short var_1 = (short)-8240;
long long int var_4 = -1197836852095651549LL;
unsigned long long int var_6 = 9646073011719551352ULL;
unsigned long long int var_9 = 10717628837357138902ULL;
signed char var_10 = (signed char)-68;
unsigned long long int var_13 = 5897182198516886197ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-55;
int var_16 = -1342550787;
unsigned short var_17 = (unsigned short)25264;
int var_18 = -1861038506;
unsigned int var_19 = 598286048U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 17461431971587209783ULL;
short arr_0 [10] [10] ;
unsigned char arr_1 [10] [10] ;
int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-20843;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = -1618020938;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
