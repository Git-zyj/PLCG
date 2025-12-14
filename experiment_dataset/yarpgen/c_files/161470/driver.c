#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 360743328;
unsigned long long int var_1 = 14242089411139297520ULL;
unsigned int var_2 = 388728264U;
signed char var_5 = (signed char)-101;
int var_6 = 1740931609;
int var_7 = 719253304;
short var_8 = (short)-19386;
unsigned long long int var_9 = 6353690648913785882ULL;
short var_11 = (short)4254;
unsigned int var_12 = 313738873U;
int zero = 0;
long long int var_15 = -8629711747014340844LL;
unsigned int var_16 = 3695747054U;
short var_17 = (short)-6007;
int var_18 = 2087494672;
unsigned int arr_0 [18] ;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3442248479U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1635835536498707694LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
