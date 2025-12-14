#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 96822336;
unsigned int var_4 = 2653556365U;
unsigned long long int var_11 = 14446886712069384340ULL;
long long int var_16 = -5635457330416340304LL;
int zero = 0;
short var_20 = (short)-12050;
unsigned long long int var_21 = 12894087152069880944ULL;
short var_22 = (short)14610;
unsigned long long int var_23 = 8205939193712229605ULL;
unsigned long long int var_24 = 1915427410816681005ULL;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)11;
unsigned short var_27 = (unsigned short)37055;
signed char arr_2 [21] ;
short arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-30072;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
