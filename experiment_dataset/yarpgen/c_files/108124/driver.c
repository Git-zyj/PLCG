#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned char var_1 = (unsigned char)152;
unsigned long long int var_4 = 16692283974790639357ULL;
unsigned char var_7 = (unsigned char)165;
int var_10 = 1686245888;
unsigned char var_14 = (unsigned char)75;
int zero = 0;
long long int var_16 = -626890062094066169LL;
int var_17 = -851775993;
unsigned short var_18 = (unsigned short)13090;
unsigned short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)36146;
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
