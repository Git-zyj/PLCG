#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27766;
unsigned char var_1 = (unsigned char)172;
unsigned char var_2 = (unsigned char)8;
unsigned int var_4 = 954405509U;
unsigned short var_6 = (unsigned short)28049;
signed char var_10 = (signed char)91;
int zero = 0;
unsigned long long int var_16 = 10705413181853514620ULL;
unsigned char var_17 = (unsigned char)73;
void init() {
}

void checksum() {
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
