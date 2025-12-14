#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1334891326145153622LL;
unsigned int var_1 = 257190460U;
int var_6 = 1164627263;
unsigned short var_7 = (unsigned short)58248;
unsigned int var_8 = 2133885679U;
signed char var_11 = (signed char)-104;
int zero = 0;
long long int var_13 = 4563223483352790525LL;
unsigned short var_14 = (unsigned short)30665;
unsigned short var_15 = (unsigned short)6734;
unsigned char var_16 = (unsigned char)25;
int arr_4 [20] ;
int arr_5 [20] [20] ;
unsigned int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -904800682;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 1078495517;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 113414007U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
