#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7723985480274959771LL;
unsigned char var_4 = (unsigned char)145;
signed char var_5 = (signed char)4;
unsigned int var_7 = 3103182455U;
long long int var_10 = -2621618004807208055LL;
int var_12 = -1820790276;
unsigned long long int var_15 = 43398016072594497ULL;
int zero = 0;
signed char var_18 = (signed char)-64;
short var_19 = (short)17547;
unsigned short var_20 = (unsigned short)65283;
unsigned long long int var_21 = 16116134963032177740ULL;
short var_22 = (short)1615;
unsigned char var_23 = (unsigned char)56;
short var_24 = (short)-26653;
short var_25 = (short)13362;
signed char var_26 = (signed char)-84;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)40675;
_Bool arr_0 [17] ;
_Bool arr_3 [17] ;
signed char arr_4 [20] ;
unsigned char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)106;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
