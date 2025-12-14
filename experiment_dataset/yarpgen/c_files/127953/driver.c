#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17770;
short var_1 = (short)-29301;
unsigned char var_5 = (unsigned char)68;
short var_7 = (short)-30690;
short var_8 = (short)-32615;
unsigned long long int var_9 = 14730889107120604534ULL;
unsigned int var_10 = 2934195327U;
int zero = 0;
int var_12 = 928234758;
short var_13 = (short)-12705;
unsigned char var_14 = (unsigned char)78;
short var_15 = (short)14304;
void init() {
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
