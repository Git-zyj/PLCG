#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4055552211112009440LL;
int var_2 = -205182113;
unsigned long long int var_6 = 14716310742238346776ULL;
unsigned int var_11 = 2804953399U;
unsigned short var_17 = (unsigned short)60314;
int zero = 0;
unsigned long long int var_18 = 14791040382923313882ULL;
int var_19 = -984982129;
unsigned char var_20 = (unsigned char)220;
long long int var_21 = -6990777889154197317LL;
_Bool var_22 = (_Bool)1;
_Bool arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
