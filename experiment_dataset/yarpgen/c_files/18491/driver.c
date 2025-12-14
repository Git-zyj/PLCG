#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-16;
int var_6 = -1131422765;
long long int var_12 = -669965580308836426LL;
unsigned char var_13 = (unsigned char)213;
unsigned char var_14 = (unsigned char)237;
int var_19 = -540808348;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-40;
long long int var_22 = 8810582284805218166LL;
_Bool var_23 = (_Bool)0;
int arr_2 [25] ;
long long int arr_3 [25] ;
_Bool arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1792382474;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -838672592547268210LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
