#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1714996672;
unsigned char var_2 = (unsigned char)236;
unsigned long long int var_3 = 8494533816360955787ULL;
int var_4 = 1854601193;
unsigned char var_5 = (unsigned char)222;
short var_6 = (short)3692;
unsigned char var_7 = (unsigned char)45;
long long int var_8 = 2322582372707303334LL;
int var_10 = -2088643082;
unsigned int var_11 = 2320955877U;
int var_12 = -1232049851;
unsigned short var_13 = (unsigned short)46792;
short var_14 = (short)16709;
unsigned short var_15 = (unsigned short)17748;
unsigned char var_16 = (unsigned char)108;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
int var_18 = -1755060536;
unsigned long long int var_19 = 3744061035037570827ULL;
signed char var_20 = (signed char)-68;
unsigned char var_21 = (unsigned char)134;
signed char var_22 = (signed char)-23;
short arr_1 [10] ;
int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)8527;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 897470038;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
