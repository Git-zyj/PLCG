#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned short var_2 = (unsigned short)17141;
unsigned long long int var_4 = 13939048882548911866ULL;
unsigned int var_6 = 3095491897U;
unsigned long long int var_9 = 583579409948753788ULL;
unsigned int var_10 = 339413522U;
unsigned long long int var_14 = 2351487648701383595ULL;
unsigned long long int var_16 = 17042960488908435247ULL;
int zero = 0;
unsigned int var_18 = 4071191190U;
short var_19 = (short)-19836;
int var_20 = -1004097833;
unsigned int var_21 = 2250085754U;
signed char var_22 = (signed char)-23;
unsigned int var_23 = 1906435126U;
long long int var_24 = 4543514980734318952LL;
signed char var_25 = (signed char)86;
_Bool arr_0 [22] [22] ;
short arr_1 [22] [22] ;
unsigned short arr_3 [22] ;
signed char arr_4 [22] ;
unsigned short arr_2 [22] ;
short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)22631;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)56434;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)119 : (signed char)-61;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)19156;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)18101 : (short)-15625;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
