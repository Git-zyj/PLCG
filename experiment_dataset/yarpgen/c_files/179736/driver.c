#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 939238999U;
unsigned long long int var_4 = 931151088673507475ULL;
unsigned short var_6 = (unsigned short)57099;
_Bool var_7 = (_Bool)1;
signed char var_14 = (signed char)-46;
int zero = 0;
int var_20 = -544288081;
long long int var_21 = -2802786870290645224LL;
unsigned long long int var_22 = 14231463284546399840ULL;
unsigned char var_23 = (unsigned char)217;
short var_24 = (short)2598;
unsigned int var_25 = 3653014356U;
int var_26 = 402175004;
signed char arr_0 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)69;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
