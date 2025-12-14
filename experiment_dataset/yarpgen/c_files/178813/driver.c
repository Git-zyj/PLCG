#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3675909670U;
unsigned short var_2 = (unsigned short)4013;
short var_3 = (short)-8611;
unsigned int var_10 = 2763622410U;
unsigned short var_11 = (unsigned short)11259;
long long int var_13 = -7638423500206062856LL;
short var_15 = (short)16311;
int var_16 = -1567590083;
unsigned char var_17 = (unsigned char)210;
int zero = 0;
unsigned short var_19 = (unsigned short)60446;
short var_20 = (short)-16885;
unsigned char var_21 = (unsigned char)111;
signed char var_22 = (signed char)38;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)107;
unsigned char var_25 = (unsigned char)39;
unsigned short arr_0 [17] ;
unsigned short arr_1 [17] ;
unsigned char arr_4 [17] ;
signed char arr_7 [17] ;
unsigned short arr_10 [23] [23] ;
unsigned long long int arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
unsigned int arr_8 [17] ;
unsigned char arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)25615;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)43154;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)83 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)28644;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 17221440023938223507ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1201878828U : 1545211380U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)138;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
