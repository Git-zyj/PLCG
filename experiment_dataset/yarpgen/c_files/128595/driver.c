#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-20848;
signed char var_9 = (signed char)105;
short var_11 = (short)-14615;
int var_13 = 1910336681;
int var_15 = 274140541;
signed char var_19 = (signed char)65;
int zero = 0;
int var_20 = 674691183;
unsigned char var_21 = (unsigned char)108;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 4219023947U;
unsigned int arr_1 [22] [22] ;
unsigned int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 4154708915U : 2849531024U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 815343247U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
