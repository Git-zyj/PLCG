#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28219;
short var_1 = (short)13690;
unsigned long long int var_2 = 8999785411661214276ULL;
short var_4 = (short)29087;
int var_5 = -473031748;
long long int var_6 = -8973455509583631952LL;
signed char var_7 = (signed char)5;
unsigned long long int var_8 = 10615416315963976022ULL;
short var_9 = (short)32717;
unsigned long long int var_10 = 10297171406260327021ULL;
long long int var_11 = -2728143278182060483LL;
short var_12 = (short)19037;
short var_13 = (short)-22565;
signed char var_14 = (signed char)-96;
signed char var_16 = (signed char)103;
int zero = 0;
unsigned int var_19 = 2387080385U;
unsigned short var_20 = (unsigned short)57393;
short var_21 = (short)-13430;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)39;
signed char var_24 = (signed char)-109;
unsigned int arr_0 [18] ;
unsigned int arr_1 [18] ;
_Bool arr_4 [23] ;
unsigned int arr_5 [23] ;
unsigned long long int arr_2 [18] ;
signed char arr_3 [18] ;
unsigned long long int arr_6 [23] ;
short arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 493672962U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1373216381U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1375799545U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 15350641494631074759ULL : 2121215889360999636ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-80 : (signed char)14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 8983805701711867945ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-8638;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
