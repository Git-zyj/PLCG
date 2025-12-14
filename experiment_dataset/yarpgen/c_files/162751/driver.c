#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -2387423;
short var_9 = (short)24751;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
unsigned short var_18 = (unsigned short)20746;
short var_19 = (short)20852;
signed char var_20 = (signed char)-114;
int var_21 = -621847010;
unsigned short var_22 = (unsigned short)60382;
int var_23 = -733540743;
short var_24 = (short)18470;
unsigned short arr_0 [10] ;
signed char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)25283;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-30 : (signed char)83;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
