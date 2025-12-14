#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1531578063;
unsigned long long int var_1 = 12259212757422401374ULL;
unsigned short var_3 = (unsigned short)65279;
signed char var_4 = (signed char)-65;
unsigned long long int var_5 = 3783219946209434479ULL;
unsigned char var_6 = (unsigned char)184;
short var_7 = (short)6408;
unsigned long long int var_9 = 1226446768554523870ULL;
unsigned int var_10 = 2876018981U;
unsigned char var_11 = (unsigned char)172;
unsigned short var_12 = (unsigned short)2273;
long long int var_13 = -9013801895410724506LL;
int var_14 = 1412099371;
unsigned char var_15 = (unsigned char)124;
unsigned int var_16 = 752230127U;
unsigned long long int var_17 = 8008958425210212729ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)16;
unsigned long long int var_21 = 17919186643026274772ULL;
unsigned long long int var_22 = 11101560833991873996ULL;
signed char var_23 = (signed char)-112;
unsigned short var_24 = (unsigned short)22313;
int arr_6 [24] ;
unsigned char arr_9 [24] ;
unsigned int arr_11 [24] [24] [24] ;
long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1847174194;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 3832985361U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -2122640850811491610LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
