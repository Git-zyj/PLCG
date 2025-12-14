#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)247;
short var_8 = (short)-27045;
unsigned char var_9 = (unsigned char)213;
int zero = 0;
unsigned short var_10 = (unsigned short)44967;
unsigned char var_11 = (unsigned char)78;
short var_12 = (short)-20826;
unsigned char var_13 = (unsigned char)57;
unsigned char var_14 = (unsigned char)138;
unsigned char var_15 = (unsigned char)212;
short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-6757;
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
