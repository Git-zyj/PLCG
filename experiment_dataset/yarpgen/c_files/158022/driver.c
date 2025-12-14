#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4357835575774055441LL;
long long int var_2 = -2754374433831371395LL;
long long int var_3 = -4038191000570376367LL;
long long int var_7 = -2385094692403526377LL;
long long int var_10 = -1527062334626933872LL;
signed char var_14 = (signed char)-58;
long long int var_15 = 1442741118267076559LL;
signed char var_16 = (signed char)-43;
int zero = 0;
long long int var_17 = 8341899977775049505LL;
signed char var_18 = (signed char)-62;
signed char var_19 = (signed char)-109;
signed char var_20 = (signed char)79;
signed char arr_1 [24] ;
long long int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1265065084083909365LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
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
