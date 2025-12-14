#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6410682058860327134LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)26376;
long long int var_5 = -5745821815598198616LL;
short var_6 = (short)18253;
unsigned long long int var_10 = 8385174114487396981ULL;
_Bool var_11 = (_Bool)1;
long long int var_14 = 7887057797758809857LL;
int zero = 0;
unsigned char var_16 = (unsigned char)34;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6814012470180103505LL;
long long int var_20 = 7889423227844691176LL;
unsigned long long int var_21 = 10888493966567279566ULL;
short arr_0 [21] ;
int arr_1 [21] ;
signed char arr_2 [21] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)6138;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1602795320;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-5;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
