#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1623732550;
signed char var_2 = (signed char)-11;
unsigned char var_5 = (unsigned char)124;
long long int var_11 = -2188157614958480775LL;
short var_14 = (short)-10908;
int zero = 0;
signed char var_16 = (signed char)33;
long long int var_17 = 8488928046620346801LL;
long long int var_18 = -7217118429970011644LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)52029;
unsigned int var_21 = 1529201140U;
long long int arr_0 [19] [19] ;
long long int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -5610764347698807184LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -4418899820040117644LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 9211242851152263550ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1300234253787812576LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
