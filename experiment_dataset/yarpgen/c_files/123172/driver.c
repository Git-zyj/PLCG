#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19667;
long long int var_3 = -7472976896312619603LL;
signed char var_9 = (signed char)-113;
unsigned int var_10 = 2699628988U;
unsigned int var_17 = 2125455416U;
int zero = 0;
unsigned int var_19 = 1035388285U;
long long int var_20 = 8637378642483726537LL;
long long int var_21 = 8553304135577433752LL;
long long int var_22 = -2251788476704875528LL;
unsigned int var_23 = 2717511258U;
signed char var_24 = (signed char)27;
int var_25 = 936074097;
unsigned long long int arr_1 [12] ;
unsigned short arr_2 [12] ;
unsigned int arr_3 [12] ;
unsigned long long int arr_4 [19] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 17890651786119676544ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)36245;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 278248935U : 1105772724U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 16362030014583562196ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1416709482453743810LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
