#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4680848892220530549LL;
int var_1 = 2137657378;
unsigned char var_2 = (unsigned char)45;
signed char var_4 = (signed char)-112;
signed char var_5 = (signed char)-11;
unsigned int var_6 = 518315666U;
long long int var_8 = 3672465427861630415LL;
unsigned long long int var_9 = 4090737149773507917ULL;
int zero = 0;
long long int var_11 = -748875626832777786LL;
unsigned int var_12 = 207433698U;
int var_13 = 837370658;
int var_14 = 1383724725;
short var_15 = (short)20224;
long long int var_16 = -3707957745518319295LL;
long long int arr_0 [25] ;
short arr_2 [25] ;
int arr_3 [25] ;
unsigned int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2939504233585531336LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)13484;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -2018625757;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 3250337353U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
