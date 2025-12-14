#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)124;
unsigned short var_2 = (unsigned short)57091;
long long int var_4 = 8154806686044634325LL;
int zero = 0;
long long int var_11 = -1835868253740343599LL;
signed char var_12 = (signed char)37;
unsigned int var_13 = 2998549445U;
_Bool var_14 = (_Bool)1;
long long int var_15 = 7398790996813778276LL;
unsigned short var_16 = (unsigned short)11685;
unsigned char var_17 = (unsigned char)32;
unsigned long long int var_18 = 4052276987435295616ULL;
unsigned long long int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 13882804373148702755ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 474272100997148811ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2308281051367526985ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-110 : (signed char)99;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
