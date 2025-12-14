#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11715425477216930724ULL;
unsigned long long int var_7 = 17952758510182470783ULL;
long long int var_8 = -4287083157553148119LL;
unsigned long long int var_10 = 17232700584421664350ULL;
unsigned long long int var_11 = 13200363193215913927ULL;
signed char var_14 = (signed char)-43;
int zero = 0;
signed char var_15 = (signed char)59;
unsigned short var_16 = (unsigned short)14617;
unsigned short var_17 = (unsigned short)130;
unsigned long long int var_18 = 10004100832684581119ULL;
unsigned long long int var_19 = 8884281346731436435ULL;
long long int arr_0 [22] ;
unsigned int arr_3 [22] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -4234247595305092656LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1117480597U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1091048605447801751LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
