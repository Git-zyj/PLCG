#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -896919635;
signed char var_1 = (signed char)120;
short var_3 = (short)24492;
long long int var_6 = 3959846855790709595LL;
long long int var_7 = -7585348737679392791LL;
unsigned int var_8 = 3056937963U;
unsigned long long int var_9 = 260330044101346339ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)3;
signed char var_13 = (signed char)29;
signed char var_14 = (signed char)9;
unsigned long long int var_15 = 4078338594978711309ULL;
signed char arr_1 [12] ;
signed char arr_3 [12] ;
unsigned int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1807876820U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
