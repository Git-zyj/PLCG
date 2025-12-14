#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7859175152261250251ULL;
unsigned short var_3 = (unsigned short)5101;
unsigned short var_6 = (unsigned short)2700;
unsigned short var_7 = (unsigned short)4342;
unsigned short var_8 = (unsigned short)44057;
unsigned long long int var_9 = 5365445950478015962ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)7986;
unsigned short var_11 = (unsigned short)5104;
unsigned short var_12 = (unsigned short)43467;
short var_13 = (short)-14360;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
