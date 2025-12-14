#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2432504725U;
unsigned int var_1 = 2175389404U;
unsigned long long int var_4 = 10751569807404320825ULL;
signed char var_11 = (signed char)-43;
unsigned char var_13 = (unsigned char)83;
unsigned int var_14 = 3755682385U;
short var_16 = (short)27380;
int zero = 0;
long long int var_17 = -3656796431385682105LL;
unsigned long long int var_18 = 330820994338389503ULL;
unsigned char var_19 = (unsigned char)235;
int var_20 = -993726721;
unsigned char var_21 = (unsigned char)150;
unsigned char arr_2 [21] [21] [21] ;
unsigned int arr_4 [21] ;
unsigned short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1427725740U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)6308;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
