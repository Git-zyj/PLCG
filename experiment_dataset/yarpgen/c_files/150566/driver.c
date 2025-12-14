#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
signed char var_3 = (signed char)97;
unsigned char var_5 = (unsigned char)187;
signed char var_8 = (signed char)34;
long long int var_14 = 540770220664058039LL;
int zero = 0;
unsigned long long int var_15 = 8378693846716958206ULL;
unsigned int var_16 = 353283452U;
long long int var_17 = 4385125242349808846LL;
short var_18 = (short)10701;
int arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -796687451 : 859103188;
}

void checksum() {
    hash(&seed, var_15);
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
