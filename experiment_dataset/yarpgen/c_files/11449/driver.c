#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3315820338U;
_Bool var_8 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5114829091284572619LL;
unsigned long long int var_19 = 818728322849231528ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)5302;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)15;
signed char var_23 = (signed char)35;
unsigned short arr_2 [14] ;
int arr_3 [14] ;
unsigned long long int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)51699;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -599471621;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 8374231542425464937ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
