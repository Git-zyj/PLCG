#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13264077071172770133ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 9258088423904185830ULL;
long long int var_5 = 8698454672948042100LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)24;
int var_9 = 678545737;
unsigned char var_10 = (unsigned char)87;
long long int var_11 = 8668255915456743190LL;
unsigned char var_12 = (unsigned char)180;
int zero = 0;
signed char var_13 = (signed char)49;
long long int var_14 = 4487128607719758762LL;
long long int var_15 = 4618017092786323519LL;
long long int var_16 = 7193720493102638644LL;
long long int var_17 = 3741989836617523694LL;
long long int var_18 = 7969159674633459010LL;
long long int arr_1 [11] ;
signed char arr_3 [11] [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4226263984854027746LL : -8415588507270384263LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
