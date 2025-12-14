#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
unsigned char var_4 = (unsigned char)157;
unsigned char var_5 = (unsigned char)13;
unsigned short var_10 = (unsigned short)21098;
unsigned short var_12 = (unsigned short)36478;
int var_14 = -341000659;
int zero = 0;
int var_18 = -169281777;
int var_19 = -989887827;
signed char var_20 = (signed char)53;
signed char var_21 = (signed char)107;
unsigned char arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)210;
}

void checksum() {
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
