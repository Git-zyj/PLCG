#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
int var_1 = -2051319996;
unsigned long long int var_2 = 18203203857292909444ULL;
signed char var_5 = (signed char)65;
unsigned long long int var_6 = 4541194994438026633ULL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)6138;
short var_13 = (short)-20821;
long long int var_14 = 3437740558261424069LL;
int zero = 0;
signed char var_16 = (signed char)35;
short var_17 = (short)18811;
unsigned short var_18 = (unsigned short)29366;
unsigned int var_19 = 3321545153U;
signed char var_20 = (signed char)-93;
unsigned short arr_2 [20] [20] ;
signed char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)47928 : (unsigned short)63442;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)-106;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
