#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23415;
unsigned short var_4 = (unsigned short)190;
unsigned int var_5 = 243066199U;
short var_8 = (short)19798;
unsigned char var_12 = (unsigned char)196;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1242857457305563105ULL;
int var_18 = -687029892;
int zero = 0;
unsigned long long int var_19 = 7349819991428331756ULL;
unsigned char var_20 = (unsigned char)140;
long long int var_21 = -794746537875470144LL;
short var_22 = (short)25373;
_Bool var_23 = (_Bool)0;
unsigned char arr_1 [21] ;
long long int arr_2 [21] ;
unsigned short arr_6 [21] ;
int arr_8 [21] [21] [21] [21] ;
short arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 8396779425424624489LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)29189;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1682663246 : -2041476301;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (short)-21479;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
