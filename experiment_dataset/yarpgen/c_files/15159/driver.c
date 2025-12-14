#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -795368179;
unsigned short var_4 = (unsigned short)19277;
unsigned short var_6 = (unsigned short)60200;
long long int var_7 = 1303204230552823843LL;
unsigned int var_13 = 638334356U;
int zero = 0;
long long int var_16 = -3883413106575353214LL;
signed char var_17 = (signed char)-6;
signed char var_18 = (signed char)47;
unsigned short arr_2 [25] ;
int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)20293;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 557565940;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
