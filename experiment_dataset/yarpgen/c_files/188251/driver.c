#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7345414025572313739LL;
short var_1 = (short)-15642;
int var_2 = 1200849143;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)209;
unsigned long long int var_5 = 15839340322852200558ULL;
signed char var_6 = (signed char)-75;
int var_7 = 1809597824;
unsigned int var_8 = 669513513U;
signed char var_9 = (signed char)-108;
unsigned char var_10 = (unsigned char)103;
unsigned int var_11 = 3001966846U;
unsigned short var_12 = (unsigned short)20624;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5096243066395328960ULL;
int zero = 0;
long long int var_15 = -3470652882842358130LL;
unsigned char var_16 = (unsigned char)158;
unsigned long long int var_17 = 10841243870417764208ULL;
unsigned int var_18 = 271692726U;
unsigned long long int var_19 = 9126921264693537575ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
short arr_11 [25] [25] [25] [25] ;
unsigned int arr_12 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-8171 : (short)-1300;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1690012867U : 2587972685U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
