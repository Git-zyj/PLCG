#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1386650151753541729LL;
unsigned int var_2 = 4211069890U;
short var_4 = (short)1407;
long long int var_7 = 4745292218982445743LL;
short var_8 = (short)-30569;
unsigned int var_11 = 2079855544U;
long long int var_15 = 2075523734820540193LL;
long long int var_16 = 6875294384463923946LL;
int zero = 0;
long long int var_17 = -2134134775867238298LL;
unsigned int var_18 = 1954698647U;
long long int var_19 = 1357258928422514927LL;
unsigned int var_20 = 3690488945U;
unsigned int arr_4 [25] ;
short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 425982917U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-5927;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
