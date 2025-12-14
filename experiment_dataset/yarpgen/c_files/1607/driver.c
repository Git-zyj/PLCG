#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 885916242321196015ULL;
long long int var_1 = 9212507638521555631LL;
unsigned int var_4 = 2101559283U;
unsigned int var_5 = 557513186U;
unsigned long long int var_6 = 13145714419572984851ULL;
unsigned long long int var_7 = 15789297455915364264ULL;
unsigned short var_8 = (unsigned short)30256;
short var_9 = (short)-15806;
long long int var_12 = -6271381446329800384LL;
short var_13 = (short)-3074;
short var_15 = (short)2617;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-96;
signed char var_18 = (signed char)-4;
signed char var_19 = (signed char)-67;
short var_20 = (short)-29576;
unsigned short var_21 = (unsigned short)55403;
unsigned char var_22 = (unsigned char)29;
long long int arr_0 [16] ;
short arr_2 [16] ;
unsigned short arr_5 [16] ;
signed char arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -6939527982296596088LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-490;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)42774;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-52;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
