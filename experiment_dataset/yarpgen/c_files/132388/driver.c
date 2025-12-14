#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2556509645U;
_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)146;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 412224516U;
_Bool var_8 = (_Bool)0;
long long int var_10 = -7910188044728487405LL;
unsigned long long int var_12 = 7623155867198198807ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)199;
int var_17 = -896845528;
unsigned int var_18 = 1630043984U;
unsigned int var_19 = 63867169U;
long long int var_20 = 7999109553478940636LL;
signed char var_21 = (signed char)13;
unsigned char arr_1 [16] ;
long long int arr_5 [16] ;
long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -6494661803113598465LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -7031778321300678397LL : 8070533252167773547LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
