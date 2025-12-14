#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-5;
signed char var_7 = (signed char)85;
short var_12 = (short)-2590;
short var_17 = (short)-19409;
int var_19 = 186027289;
int zero = 0;
signed char var_20 = (signed char)106;
int var_21 = 1553858497;
long long int var_22 = 865669041294621098LL;
signed char var_23 = (signed char)-64;
unsigned long long int var_24 = 14197407258288472376ULL;
unsigned short arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)17418;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
