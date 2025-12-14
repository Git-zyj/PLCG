#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25984;
unsigned short var_1 = (unsigned short)19570;
unsigned long long int var_2 = 10615631233887799096ULL;
unsigned int var_4 = 3251127932U;
unsigned char var_5 = (unsigned char)180;
unsigned char var_8 = (unsigned char)23;
int zero = 0;
unsigned char var_10 = (unsigned char)63;
long long int var_11 = 5213858516654208314LL;
long long int var_12 = 5500297104490531207LL;
unsigned long long int var_13 = 8789471402037154179ULL;
int var_14 = -1578309961;
unsigned long long int var_15 = 5680153752874514907ULL;
unsigned long long int arr_2 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 13555033108432626547ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
