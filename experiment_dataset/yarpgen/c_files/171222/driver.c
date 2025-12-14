#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-22;
long long int var_4 = -461681383556026046LL;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)-86;
unsigned int var_11 = 2656124104U;
int zero = 0;
unsigned short var_13 = (unsigned short)61863;
unsigned long long int var_14 = 404100475468413269ULL;
long long int var_15 = 9202422242399056775LL;
_Bool arr_0 [15] [15] ;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-8774;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
