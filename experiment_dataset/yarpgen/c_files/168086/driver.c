#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61860;
unsigned int var_2 = 1516295282U;
long long int var_3 = -4325073824774201635LL;
unsigned char var_4 = (unsigned char)76;
signed char var_6 = (signed char)108;
signed char var_7 = (signed char)-24;
unsigned long long int var_8 = 15033647142720551419ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)15;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 13260167986545471462ULL;
short var_17 = (short)-20755;
int zero = 0;
int var_18 = -773041733;
signed char var_19 = (signed char)-49;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14727937094519404150ULL;
long long int var_22 = 3774513515377814073LL;
int var_23 = 692800078;
unsigned int var_24 = 1955265594U;
long long int var_25 = -4735197212420949643LL;
unsigned short arr_0 [23] ;
short arr_2 [23] ;
unsigned short arr_4 [25] ;
signed char arr_3 [23] ;
signed char arr_6 [25] ;
short arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)59023;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-5104;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)56047;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)31 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)31706 : (short)15756;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
