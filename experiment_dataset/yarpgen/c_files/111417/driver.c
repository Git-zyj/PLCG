#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3719833431U;
signed char var_1 = (signed char)-20;
short var_6 = (short)3516;
long long int var_7 = 3546498721397189257LL;
unsigned short var_8 = (unsigned short)55545;
unsigned short var_9 = (unsigned short)22093;
signed char var_10 = (signed char)108;
signed char var_11 = (signed char)47;
int zero = 0;
signed char var_13 = (signed char)53;
long long int var_14 = -1144754456721944156LL;
signed char var_15 = (signed char)57;
long long int var_16 = -3856960903253691502LL;
long long int var_17 = -1789335349016939834LL;
int arr_0 [13] [13] ;
signed char arr_1 [13] ;
unsigned short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 374896104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)55730;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
