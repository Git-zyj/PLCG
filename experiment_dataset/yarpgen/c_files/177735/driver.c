#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1183524660;
unsigned int var_3 = 3083339005U;
unsigned int var_4 = 409729791U;
int var_6 = -219144560;
unsigned int var_7 = 1486984446U;
int var_10 = -1767009487;
unsigned int var_12 = 3549610971U;
short var_15 = (short)32300;
int zero = 0;
unsigned int var_19 = 346927513U;
unsigned long long int var_20 = 3016259749427134282ULL;
int var_21 = -1514719606;
unsigned char var_22 = (unsigned char)134;
int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -918659804;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2476802125U : 3343909384U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1069647435296137437ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1922145436 : -1858745833;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
