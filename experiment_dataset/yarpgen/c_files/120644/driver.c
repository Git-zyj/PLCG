#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1897719427U;
signed char var_2 = (signed char)-29;
signed char var_6 = (signed char)-117;
long long int var_7 = -5772924299685523282LL;
int var_8 = 1960943369;
unsigned int var_10 = 2574992431U;
unsigned short var_11 = (unsigned short)45036;
int zero = 0;
unsigned int var_14 = 1838085418U;
long long int var_15 = -2675743400022646686LL;
unsigned short var_16 = (unsigned short)56273;
unsigned int var_17 = 364220924U;
int var_18 = 2143528563;
unsigned int var_19 = 2762020050U;
int var_20 = 1020970598;
long long int arr_3 [13] ;
long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 5285643064494174070LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -2557201435607884104LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
