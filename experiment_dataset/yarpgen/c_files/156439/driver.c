#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)189;
unsigned long long int var_5 = 16426509243196998385ULL;
unsigned short var_6 = (unsigned short)43904;
int var_7 = 650824576;
short var_8 = (short)24834;
unsigned short var_12 = (unsigned short)31745;
unsigned short var_13 = (unsigned short)48705;
unsigned long long int var_14 = 6633067917019043048ULL;
int zero = 0;
unsigned int var_15 = 2838244625U;
unsigned short var_16 = (unsigned short)2350;
unsigned short var_17 = (unsigned short)52917;
unsigned short var_18 = (unsigned short)10244;
short var_19 = (short)-30257;
unsigned long long int var_20 = 9715019664977392490ULL;
unsigned char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)230 : (unsigned char)154;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
