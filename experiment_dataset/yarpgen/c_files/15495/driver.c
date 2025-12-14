#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-28;
signed char var_5 = (signed char)-117;
signed char var_8 = (signed char)-38;
unsigned short var_11 = (unsigned short)27909;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
long long int var_14 = 8719569693159959004LL;
long long int var_15 = 5709711540977417041LL;
unsigned int var_16 = 2473160334U;
unsigned int var_17 = 1560164657U;
unsigned short arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)54826;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 606040409U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
