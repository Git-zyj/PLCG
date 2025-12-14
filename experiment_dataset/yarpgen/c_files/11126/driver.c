#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1381479208136027096ULL;
signed char var_4 = (signed char)-114;
unsigned char var_7 = (unsigned char)159;
unsigned char var_8 = (unsigned char)202;
long long int var_9 = -7877415691358734511LL;
long long int var_10 = 6126660729653685043LL;
short var_11 = (short)-19041;
int var_13 = 1688426183;
_Bool var_14 = (_Bool)1;
long long int var_15 = 8756619491694749571LL;
unsigned short var_16 = (unsigned short)23030;
int zero = 0;
unsigned short var_17 = (unsigned short)28477;
long long int var_18 = -2393543676874574981LL;
unsigned int var_19 = 1613298949U;
unsigned short arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)31426;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
