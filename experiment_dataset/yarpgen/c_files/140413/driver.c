#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11136;
unsigned long long int var_2 = 80363801937880256ULL;
unsigned short var_6 = (unsigned short)64873;
unsigned int var_7 = 988101594U;
unsigned int var_10 = 1960659422U;
short var_12 = (short)8071;
long long int var_13 = -3631916690334956042LL;
unsigned char var_16 = (unsigned char)129;
int zero = 0;
unsigned char var_19 = (unsigned char)182;
signed char var_20 = (signed char)37;
unsigned int var_21 = 1005238152U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 6106476345439206655ULL;
unsigned char arr_3 [21] [21] ;
signed char arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)64;
}

void checksum() {
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
