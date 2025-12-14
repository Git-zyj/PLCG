#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2679102601U;
unsigned int var_4 = 4197634993U;
unsigned int var_5 = 4162729069U;
unsigned long long int var_8 = 5844008525066067015ULL;
unsigned char var_9 = (unsigned char)150;
int var_11 = 1566798150;
unsigned int var_12 = 2353926819U;
signed char var_14 = (signed char)-81;
unsigned int var_15 = 1578582884U;
signed char var_18 = (signed char)-125;
int zero = 0;
unsigned int var_19 = 502448883U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-65;
unsigned int var_22 = 314346927U;
unsigned char var_23 = (unsigned char)60;
int var_24 = -252992208;
int arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1371493411;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1559885934U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -1715473478;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
