#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)13018;
unsigned long long int var_6 = 6035617818938455379ULL;
unsigned long long int var_7 = 1984911170748145250ULL;
unsigned long long int var_8 = 2632863577372416184ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)17189;
signed char var_12 = (signed char)80;
unsigned long long int var_13 = 18252964297947654294ULL;
short var_14 = (short)8093;
unsigned long long int var_15 = 13411581958728369085ULL;
unsigned char var_16 = (unsigned char)210;
int arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 383377573;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1978426532U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-109;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
