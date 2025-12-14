#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_17 = 1154046327U;
int zero = 0;
signed char var_18 = (signed char)86;
unsigned char var_19 = (unsigned char)235;
unsigned int var_20 = 1412225873U;
unsigned char var_21 = (unsigned char)70;
int var_22 = -1796859766;
long long int var_23 = -2578449573716639439LL;
unsigned long long int var_24 = 8346624865844363843ULL;
unsigned int var_25 = 3791290168U;
short var_26 = (short)-32025;
signed char var_27 = (signed char)58;
unsigned long long int var_28 = 3081455715622708547ULL;
unsigned int var_29 = 1659570555U;
int arr_19 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? -343382210 : -1556518475;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
