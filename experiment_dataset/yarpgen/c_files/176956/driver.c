#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5564386932485650704LL;
unsigned char var_9 = (unsigned char)85;
unsigned short var_11 = (unsigned short)50060;
signed char var_13 = (signed char)-51;
unsigned short var_15 = (unsigned short)3214;
int zero = 0;
int var_16 = -621989821;
signed char var_17 = (signed char)32;
short var_18 = (short)-8303;
long long int var_19 = -1560343101612809604LL;
signed char arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-19;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
