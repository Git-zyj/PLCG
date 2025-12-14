#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7309080219375721156LL;
signed char var_10 = (signed char)114;
signed char var_11 = (signed char)-114;
unsigned int var_12 = 3662703005U;
int var_16 = 926554064;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)42;
signed char var_22 = (signed char)66;
unsigned int var_23 = 1499165976U;
short var_24 = (short)-29328;
unsigned char arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 11290204971126328427ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
