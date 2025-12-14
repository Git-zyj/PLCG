#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12962;
int var_5 = -1681782965;
unsigned short var_9 = (unsigned short)54189;
unsigned short var_13 = (unsigned short)56914;
int var_18 = -1360947102;
int zero = 0;
signed char var_19 = (signed char)-113;
int var_20 = 1416484500;
unsigned short var_21 = (unsigned short)44957;
unsigned long long int var_22 = 17119758920380128477ULL;
short var_23 = (short)-4098;
long long int var_24 = -4201305863159056961LL;
int var_25 = 1912416072;
short var_26 = (short)-15615;
signed char arr_0 [23] ;
long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -8830450881232595972LL;
}

void checksum() {
    hash(&seed, var_19);
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
