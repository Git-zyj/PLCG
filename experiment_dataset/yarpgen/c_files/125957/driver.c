#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
unsigned char var_1 = (unsigned char)120;
signed char var_2 = (signed char)13;
short var_3 = (short)-22839;
unsigned char var_4 = (unsigned char)109;
unsigned short var_5 = (unsigned short)57540;
signed char var_7 = (signed char)-99;
short var_8 = (short)29596;
int zero = 0;
unsigned char var_10 = (unsigned char)130;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
