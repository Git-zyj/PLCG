#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
int var_2 = 1875293909;
signed char var_3 = (signed char)-16;
long long int var_9 = -506832365775611497LL;
signed char var_10 = (signed char)50;
unsigned char var_11 = (unsigned char)208;
int zero = 0;
long long int var_12 = 1749171127696260723LL;
long long int var_13 = 4844605438641316534LL;
unsigned int var_14 = 731642026U;
unsigned int var_15 = 2240393472U;
signed char var_16 = (signed char)82;
unsigned char var_17 = (unsigned char)10;
int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1603622970;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
