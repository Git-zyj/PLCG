#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
signed char var_1 = (signed char)-113;
long long int var_5 = -2513188920779858670LL;
unsigned long long int var_8 = 7827623009351718187ULL;
unsigned char var_11 = (unsigned char)137;
unsigned short var_12 = (unsigned short)26862;
unsigned char var_14 = (unsigned char)83;
int zero = 0;
int var_19 = 2009311679;
unsigned long long int var_20 = 9801987904120156871ULL;
unsigned long long int var_21 = 11647793498962173061ULL;
unsigned int var_22 = 3188709717U;
unsigned int arr_0 [16] [16] ;
unsigned int arr_3 [16] ;
signed char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1824460405U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1499387925U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-112;
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
