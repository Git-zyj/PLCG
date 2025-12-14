#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)19;
signed char var_9 = (signed char)66;
int var_10 = 833728763;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = 172414135028432047LL;
unsigned char var_15 = (unsigned char)244;
unsigned short var_16 = (unsigned short)2879;
long long int var_17 = 3528324263467074235LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)48419;
long long int arr_0 [11] [11] ;
short arr_1 [11] [11] ;
unsigned long long int arr_3 [11] ;
long long int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -4233969062773514060LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-3955;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 17331210363372053618ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = -5079145034425748191LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
