#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 613522869U;
unsigned char var_2 = (unsigned char)54;
unsigned long long int var_3 = 10008282218555563661ULL;
unsigned char var_4 = (unsigned char)22;
unsigned char var_6 = (unsigned char)184;
long long int var_9 = 2146403832951100335LL;
signed char var_10 = (signed char)111;
long long int var_11 = -202579633614599269LL;
int zero = 0;
int var_12 = 1301288553;
unsigned short var_13 = (unsigned short)29701;
unsigned short var_14 = (unsigned short)5515;
unsigned long long int var_15 = 8118337739252467682ULL;
_Bool var_16 = (_Bool)1;
unsigned char arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
signed char arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-96;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
