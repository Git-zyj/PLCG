#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)46;
unsigned int var_8 = 4082614859U;
unsigned long long int var_11 = 14055049781973119607ULL;
unsigned char var_14 = (unsigned char)53;
signed char var_17 = (signed char)-33;
int zero = 0;
unsigned short var_19 = (unsigned short)37722;
long long int var_20 = -6578424415197990883LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-20;
unsigned int arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4278244331U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16995 : (unsigned short)30570;
}

void checksum() {
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
