#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7417583643860647493LL;
unsigned int var_2 = 3751366446U;
signed char var_5 = (signed char)-38;
unsigned int var_9 = 1928424147U;
short var_10 = (short)-11428;
unsigned long long int var_12 = 8490316521124789152ULL;
unsigned int var_13 = 3272553263U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 4822278767660006229ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)147;
int var_20 = 164440815;
long long int var_21 = -8075010788986331446LL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
short var_24 = (short)26537;
long long int var_25 = -6074477072122601864LL;
signed char arr_0 [13] ;
short arr_1 [13] ;
unsigned long long int arr_2 [13] ;
unsigned int arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)7704;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 11119157847182167582ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 602136497U;
}

void checksum() {
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
