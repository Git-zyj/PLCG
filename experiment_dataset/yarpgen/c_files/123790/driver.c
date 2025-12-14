#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47351;
_Bool var_3 = (_Bool)1;
int var_7 = -1783543438;
unsigned long long int var_8 = 18422765581302605030ULL;
long long int var_12 = 452411142940171413LL;
unsigned int var_13 = 4211999419U;
int zero = 0;
unsigned short var_14 = (unsigned short)6950;
int var_15 = -1388654769;
int var_16 = -123392934;
unsigned long long int var_17 = 13456899173675286223ULL;
unsigned short var_18 = (unsigned short)15780;
unsigned long long int var_19 = 2257089035982441815ULL;
int var_20 = -1090420033;
unsigned short var_21 = (unsigned short)59021;
signed char var_22 = (signed char)-123;
unsigned short var_23 = (unsigned short)12664;
long long int var_24 = 4518550852497317417LL;
unsigned short var_25 = (unsigned short)3350;
signed char var_26 = (signed char)102;
long long int arr_0 [21] ;
long long int arr_2 [21] [21] [21] ;
_Bool arr_4 [21] [21] [21] ;
unsigned short arr_6 [21] ;
signed char arr_20 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1229139349011128411LL : -5859047778694473440LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1429492201955034065LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)57204;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)108 : (signed char)21;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
