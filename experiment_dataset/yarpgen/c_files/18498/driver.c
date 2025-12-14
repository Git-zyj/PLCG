#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -219925674;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 5081547261422266255ULL;
int zero = 0;
signed char var_12 = (signed char)-125;
unsigned long long int var_13 = 10677425476475222190ULL;
unsigned long long int var_14 = 7310042529923355920ULL;
long long int var_15 = -7016528011807313077LL;
short arr_1 [19] ;
int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-25961;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -1122196648;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
