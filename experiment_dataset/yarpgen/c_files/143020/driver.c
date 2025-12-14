#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30833;
unsigned int var_4 = 2700919754U;
unsigned char var_6 = (unsigned char)213;
unsigned char var_7 = (unsigned char)158;
unsigned int var_8 = 3082325171U;
int var_9 = -1668057119;
int zero = 0;
long long int var_11 = -3397948992457693588LL;
long long int var_12 = 3993940510705583310LL;
unsigned char var_13 = (unsigned char)172;
signed char var_14 = (signed char)102;
unsigned int arr_0 [24] [24] ;
signed char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 718983151U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-86;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
