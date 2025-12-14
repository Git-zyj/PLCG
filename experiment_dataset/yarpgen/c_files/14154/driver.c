#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3122293470U;
unsigned long long int var_3 = 17556353327905448628ULL;
signed char var_5 = (signed char)23;
unsigned char var_8 = (unsigned char)144;
unsigned long long int var_10 = 5640407422373895280ULL;
unsigned long long int var_11 = 12938470354622959862ULL;
unsigned short var_12 = (unsigned short)1344;
int zero = 0;
signed char var_14 = (signed char)-4;
long long int var_15 = 278118474503352000LL;
unsigned short var_16 = (unsigned short)24767;
unsigned int var_17 = 4097714824U;
signed char var_18 = (signed char)-82;
long long int var_19 = 8894297296034686694LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)31172;
unsigned int var_22 = 1332761213U;
unsigned long long int var_23 = 16436910645216917630ULL;
unsigned long long int var_24 = 12630262203166784427ULL;
unsigned long long int var_25 = 2059419020371232721ULL;
_Bool arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
unsigned char arr_6 [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
short arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)59545;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 900956657188547137ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-10966;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
