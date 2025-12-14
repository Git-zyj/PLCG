#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 66371168880232619ULL;
unsigned long long int var_4 = 5230784409198074419ULL;
unsigned long long int var_8 = 15856647707838329634ULL;
unsigned long long int var_12 = 9307653288436089751ULL;
unsigned long long int var_13 = 15582420874896973914ULL;
unsigned long long int var_17 = 10169675796442514947ULL;
int zero = 0;
unsigned long long int var_20 = 5686884910233237474ULL;
unsigned long long int var_21 = 12566223350139320782ULL;
unsigned long long int var_22 = 15419146756141747800ULL;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 17403976923806189382ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 6616404883749866239ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 9840501893202329916ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
