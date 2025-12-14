#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 991768348;
unsigned short var_9 = (unsigned short)12988;
int var_10 = 604766916;
int zero = 0;
signed char var_12 = (signed char)-65;
signed char var_13 = (signed char)-113;
unsigned int var_14 = 1996075586U;
short var_15 = (short)5637;
short var_16 = (short)18173;
long long int arr_0 [14] ;
unsigned long long int arr_2 [14] ;
signed char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 7599609186043502464LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 11473843420234884912ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)-117;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
