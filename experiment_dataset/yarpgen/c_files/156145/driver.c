#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14003785874995328124ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 13416918372250682566ULL;
unsigned char var_5 = (unsigned char)187;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)75;
unsigned long long int var_18 = 10107118634530056381ULL;
short var_19 = (short)-30035;
unsigned long long int var_20 = 12478433337356421398ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned char arr_0 [14] [14] ;
unsigned char arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)36202;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)15776 : (short)-680;
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
