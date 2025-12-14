#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 111198890;
short var_1 = (short)-29815;
signed char var_2 = (signed char)-82;
short var_4 = (short)24216;
int var_6 = -1499774983;
unsigned long long int var_7 = 13069415509194474975ULL;
long long int var_9 = -7600109977419749511LL;
int var_11 = -884122965;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11267801527969083403ULL;
signed char var_17 = (signed char)112;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)152;
long long int var_20 = 5385106705037103992LL;
signed char var_21 = (signed char)-42;
unsigned int arr_0 [17] [17] ;
signed char arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3621725006U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)85;
}

void checksum() {
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
