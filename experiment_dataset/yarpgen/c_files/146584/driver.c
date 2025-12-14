#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3891883782U;
signed char var_7 = (signed char)79;
signed char var_8 = (signed char)-102;
unsigned short var_10 = (unsigned short)64267;
unsigned short var_11 = (unsigned short)18012;
long long int var_13 = 1608842054108922420LL;
signed char var_15 = (signed char)-73;
long long int var_16 = 1190124470307240606LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)186;
short var_21 = (short)-31577;
unsigned char var_22 = (unsigned char)237;
unsigned int var_23 = 280977750U;
unsigned int var_24 = 2631824095U;
long long int var_25 = 2072444263959213039LL;
long long int arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7383663219403423278LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1071217141581353841ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
