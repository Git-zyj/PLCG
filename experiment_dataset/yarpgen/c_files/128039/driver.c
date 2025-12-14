#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned char var_1 = (unsigned char)112;
short var_3 = (short)-6794;
unsigned char var_4 = (unsigned char)163;
unsigned char var_9 = (unsigned char)119;
int var_13 = 252315948;
int zero = 0;
unsigned char var_19 = (unsigned char)93;
int var_20 = -696176711;
unsigned char var_21 = (unsigned char)67;
signed char var_22 = (signed char)-95;
short arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)24458;
}

void checksum() {
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
