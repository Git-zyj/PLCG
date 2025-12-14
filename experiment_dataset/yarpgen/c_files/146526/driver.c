#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 104767859;
unsigned char var_4 = (unsigned char)124;
unsigned int var_6 = 3966880941U;
signed char var_8 = (signed char)25;
unsigned int var_10 = 3009549511U;
long long int var_14 = 8105479119364899884LL;
int zero = 0;
unsigned short var_15 = (unsigned short)15287;
int var_16 = -466765886;
long long int var_17 = -3443879682665590488LL;
unsigned char arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)127;
}

void checksum() {
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
