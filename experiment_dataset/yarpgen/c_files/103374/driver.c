#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 3412910307U;
long long int var_4 = 6400130596844583195LL;
unsigned int var_6 = 249980799U;
int var_9 = 363738345;
long long int var_11 = 6592479426893931464LL;
int var_13 = 249943580;
unsigned char var_14 = (unsigned char)5;
int zero = 0;
int var_15 = -2039580576;
short var_16 = (short)25147;
long long int var_17 = 393404342613213556LL;
short var_18 = (short)7676;
long long int var_19 = -5710724951348131237LL;
short arr_0 [20] ;
unsigned char arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)9202;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)40;
}

void checksum() {
    hash(&seed, var_15);
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
