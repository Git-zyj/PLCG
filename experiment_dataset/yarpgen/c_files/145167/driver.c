#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1740604458;
_Bool var_2 = (_Bool)1;
int var_3 = -1089550224;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3072406679U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 17158178531860397324ULL;
unsigned long long int var_12 = 1537784241959952491ULL;
unsigned long long int var_13 = 5230076722134938961ULL;
unsigned char var_14 = (unsigned char)232;
long long int arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1592780762741851116LL : 1548729561339899888LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2731719679U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
