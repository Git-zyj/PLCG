#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)3700;
short var_5 = (short)31401;
unsigned int var_8 = 3293128933U;
unsigned short var_9 = (unsigned short)25672;
unsigned int var_11 = 2242254811U;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)24791;
short var_17 = (short)-18683;
unsigned short var_18 = (unsigned short)49633;
signed char arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-75;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
