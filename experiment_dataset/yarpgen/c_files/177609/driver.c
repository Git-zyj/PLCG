#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -959521010666733244LL;
signed char var_6 = (signed char)111;
long long int var_7 = 7948811513183981642LL;
long long int var_8 = 4757170129104676923LL;
int zero = 0;
unsigned int var_18 = 3016572848U;
unsigned short var_19 = (unsigned short)14347;
unsigned long long int var_20 = 6401721223646025438ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
long long int var_23 = -8216843346201856758LL;
short arr_1 [20] ;
short arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)16664;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)21794;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
