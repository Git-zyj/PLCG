#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37447;
unsigned short var_2 = (unsigned short)54363;
unsigned int var_6 = 1776084626U;
unsigned int var_8 = 3215557888U;
unsigned short var_11 = (unsigned short)975;
unsigned short var_14 = (unsigned short)32973;
signed char var_16 = (signed char)-14;
int zero = 0;
long long int var_18 = -2935390052754621756LL;
int var_19 = -1172280742;
long long int var_20 = -4169885433506514720LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7434577131114603817LL;
int arr_1 [22] ;
unsigned long long int arr_2 [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1100591644;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 12974707736453938203ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -3896642227344119436LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
