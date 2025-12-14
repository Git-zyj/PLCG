#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3733614778149063193LL;
short var_3 = (short)12014;
unsigned long long int var_7 = 15518931354108885356ULL;
unsigned long long int var_8 = 17443468690191428854ULL;
unsigned int var_10 = 1556475733U;
long long int var_12 = -138894195106616585LL;
unsigned int var_15 = 1911432363U;
int zero = 0;
int var_18 = 1717252962;
unsigned long long int var_19 = 12838084404354025171ULL;
unsigned short var_20 = (unsigned short)44914;
long long int var_21 = 1376628581894680268LL;
unsigned char var_22 = (unsigned char)80;
unsigned short arr_0 [25] ;
signed char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)40582;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-47;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
