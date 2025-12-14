#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
unsigned char var_1 = (unsigned char)25;
unsigned int var_5 = 3991736043U;
signed char var_9 = (signed char)71;
signed char var_11 = (signed char)-60;
unsigned char var_12 = (unsigned char)214;
short var_13 = (short)-5329;
int var_14 = 1566282814;
unsigned short var_15 = (unsigned short)56826;
int zero = 0;
int var_19 = -1011992019;
unsigned short var_20 = (unsigned short)30633;
int var_21 = -674665069;
unsigned int var_22 = 266703076U;
unsigned char var_23 = (unsigned char)238;
long long int var_24 = 8234850226437231651LL;
unsigned short var_25 = (unsigned short)32671;
unsigned short var_26 = (unsigned short)16404;
long long int var_27 = 2491094241396518047LL;
unsigned long long int var_28 = 4213430867713070945ULL;
signed char arr_4 [13] [13] ;
signed char arr_5 [13] [13] [13] ;
unsigned short arr_10 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)61295;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
