#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2120761010U;
unsigned char var_1 = (unsigned char)164;
signed char var_3 = (signed char)113;
unsigned char var_9 = (unsigned char)148;
unsigned short var_10 = (unsigned short)8296;
int var_11 = 449645406;
unsigned char var_12 = (unsigned char)143;
unsigned char var_17 = (unsigned char)160;
int var_19 = 1084265638;
int zero = 0;
unsigned char var_20 = (unsigned char)140;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 7316253450960042004ULL;
signed char arr_1 [21] ;
unsigned short arr_6 [21] [21] [21] ;
_Bool arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)26306;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
