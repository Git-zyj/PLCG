#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30572;
short var_5 = (short)-21249;
unsigned short var_6 = (unsigned short)4601;
int zero = 0;
signed char var_12 = (signed char)-40;
long long int var_13 = 2157648660325002832LL;
unsigned long long int var_14 = 11389035975701535583ULL;
short var_15 = (short)4660;
signed char arr_6 [20] ;
unsigned short arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)58601;
}

void checksum() {
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
