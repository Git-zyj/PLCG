#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
unsigned short var_2 = (unsigned short)27758;
long long int var_4 = 2409040653340549403LL;
unsigned int var_6 = 958207676U;
unsigned int var_7 = 3682541975U;
unsigned char var_8 = (unsigned char)147;
long long int var_10 = 1499770473418788630LL;
unsigned short var_12 = (unsigned short)11916;
int zero = 0;
signed char var_15 = (signed char)(-127 - 1);
long long int var_16 = -645617352942057606LL;
unsigned int var_17 = 1720843108U;
short var_18 = (short)21336;
signed char var_19 = (signed char)98;
short var_20 = (short)10988;
int arr_2 [21] ;
long long int arr_5 [21] ;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 486011690;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 2487838036532813816LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-24;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
