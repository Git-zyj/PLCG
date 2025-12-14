#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)1606;
unsigned short var_10 = (unsigned short)45111;
unsigned short var_11 = (unsigned short)7158;
unsigned short var_12 = (unsigned short)45010;
unsigned short var_15 = (unsigned short)61959;
int zero = 0;
unsigned short var_17 = (unsigned short)29334;
unsigned short var_18 = (unsigned short)28881;
unsigned short var_19 = (unsigned short)4967;
unsigned short var_20 = (unsigned short)3140;
unsigned short var_21 = (unsigned short)16520;
unsigned short arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)32433;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
