#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = -1022741126;
signed char var_7 = (signed char)91;
unsigned short var_12 = (unsigned short)53228;
unsigned int var_13 = 3505372914U;
int zero = 0;
long long int var_19 = -1698071353300852174LL;
int var_20 = -336685158;
unsigned char var_21 = (unsigned char)80;
_Bool var_22 = (_Bool)0;
long long int var_23 = -5625823595241670183LL;
unsigned int var_24 = 3773989128U;
unsigned int arr_2 [14] [14] ;
unsigned char arr_5 [14] [14] [14] [14] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 3093592460U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 5530145158113393381LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
