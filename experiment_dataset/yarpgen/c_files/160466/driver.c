#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
unsigned short var_2 = (unsigned short)20889;
short var_4 = (short)23244;
unsigned char var_9 = (unsigned char)185;
unsigned short var_10 = (unsigned short)4521;
long long int var_12 = 1075874511924733047LL;
long long int var_14 = 511451797001368240LL;
unsigned long long int var_15 = 14905623879526729445ULL;
unsigned char var_17 = (unsigned char)135;
int zero = 0;
unsigned int var_18 = 2077764029U;
long long int var_19 = 557714595175808315LL;
unsigned char var_20 = (unsigned char)176;
short var_21 = (short)-21483;
unsigned int var_22 = 1840500536U;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)23;
unsigned short var_25 = (unsigned short)21647;
unsigned char var_26 = (unsigned char)82;
unsigned char arr_0 [15] [15] ;
signed char arr_2 [15] ;
signed char arr_3 [15] [15] ;
unsigned int arr_5 [24] ;
short arr_6 [24] ;
unsigned int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1486872469U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-2403;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 3416957800U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
