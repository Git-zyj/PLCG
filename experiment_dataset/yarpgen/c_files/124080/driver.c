#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 918065334U;
signed char var_7 = (signed char)-11;
int var_8 = -452206084;
int zero = 0;
unsigned char var_11 = (unsigned char)195;
unsigned int var_12 = 4000815945U;
signed char var_13 = (signed char)-121;
long long int var_14 = 6633349095432520533LL;
signed char var_15 = (signed char)49;
int var_16 = 2841038;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int arr_0 [25] ;
signed char arr_1 [25] ;
int arr_3 [25] ;
int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 681385380 : -1881597052;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 712633002 : -432603025;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 319177444 : -1100687276;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
