#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28431;
int var_3 = -1504252536;
unsigned char var_4 = (unsigned char)132;
unsigned short var_5 = (unsigned short)25858;
unsigned short var_7 = (unsigned short)40569;
unsigned int var_8 = 3390600592U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 14163507972677544687ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)75;
unsigned long long int var_16 = 14356847700675281ULL;
unsigned long long int var_17 = 16105028005562212358ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)106;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
long long int var_22 = 2731582761559847345LL;
_Bool arr_10 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
