#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22244;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)37;
unsigned char var_11 = (unsigned char)53;
signed char var_12 = (signed char)-33;
int zero = 0;
signed char var_13 = (signed char)27;
short var_14 = (short)-20868;
unsigned char var_15 = (unsigned char)108;
long long int var_16 = 8912941853134732992LL;
int var_17 = 933666890;
unsigned int var_18 = 3263469562U;
int var_19 = -1096774385;
unsigned int arr_2 [10] ;
long long int arr_3 [10] ;
unsigned short arr_7 [10] ;
long long int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2851235931U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1286089389952191039LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)56894;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -1562949510467356995LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
