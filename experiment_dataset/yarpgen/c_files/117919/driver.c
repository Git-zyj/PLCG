#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3956518329U;
unsigned int var_1 = 4172764020U;
signed char var_2 = (signed char)38;
_Bool var_4 = (_Bool)1;
long long int var_5 = 3734204287852425248LL;
int var_7 = -2073724348;
unsigned int var_8 = 1705840994U;
signed char var_9 = (signed char)76;
short var_11 = (short)24436;
unsigned char var_12 = (unsigned char)97;
unsigned int var_16 = 411182563U;
long long int var_17 = 2307308132339561963LL;
short var_18 = (short)19654;
int zero = 0;
long long int var_19 = 7781099587241177375LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)19487;
signed char var_22 = (signed char)70;
signed char var_23 = (signed char)61;
unsigned short var_24 = (unsigned short)41233;
long long int var_25 = -6122781006460370564LL;
int var_26 = -20527185;
unsigned short var_27 = (unsigned short)31107;
int arr_0 [16] ;
unsigned int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1635169032;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1931922916U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
