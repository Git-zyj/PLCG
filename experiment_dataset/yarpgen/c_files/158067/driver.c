#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 548557805U;
unsigned int var_2 = 4260658217U;
signed char var_6 = (signed char)-24;
signed char var_7 = (signed char)76;
signed char var_12 = (signed char)99;
signed char var_13 = (signed char)-66;
signed char var_15 = (signed char)115;
unsigned int var_18 = 2503679400U;
unsigned int var_19 = 1505901603U;
int zero = 0;
unsigned int var_20 = 1993596078U;
signed char var_21 = (signed char)-34;
signed char var_22 = (signed char)-72;
unsigned int arr_1 [22] ;
signed char arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 72213529U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-9;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
