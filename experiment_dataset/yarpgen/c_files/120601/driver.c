#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1768181238397057369ULL;
long long int var_3 = -8962993316514729140LL;
unsigned int var_4 = 2147106077U;
long long int var_5 = 2313313200224646806LL;
long long int var_6 = -507500311947460962LL;
long long int var_7 = 17647713105133958LL;
unsigned char var_8 = (unsigned char)0;
signed char var_9 = (signed char)116;
int zero = 0;
unsigned short var_10 = (unsigned short)64162;
long long int var_11 = 1858308163731843433LL;
unsigned short var_12 = (unsigned short)37609;
unsigned short var_13 = (unsigned short)28774;
signed char arr_6 [22] [22] [22] ;
unsigned char arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)21 : (unsigned char)244;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
