#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29809;
unsigned int var_3 = 1041455943U;
int var_4 = 462966901;
unsigned long long int var_5 = 12188000739913640949ULL;
int var_6 = 868420379;
int var_7 = -1081851848;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)21838;
unsigned int var_12 = 1152158384U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)36009;
unsigned short var_15 = (unsigned short)28666;
unsigned int var_16 = 114266717U;
signed char var_17 = (signed char)5;
signed char arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-63;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
