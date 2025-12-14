#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46666;
unsigned short var_1 = (unsigned short)2145;
unsigned short var_2 = (unsigned short)5389;
int zero = 0;
unsigned short var_10 = (unsigned short)52540;
unsigned short var_11 = (unsigned short)61195;
unsigned short var_12 = (unsigned short)38383;
unsigned short var_13 = (unsigned short)36938;
unsigned short var_14 = (unsigned short)14461;
unsigned short arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)32996;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
