#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
short var_2 = (short)5386;
unsigned long long int var_4 = 15994748595614459929ULL;
unsigned short var_6 = (unsigned short)21546;
short var_8 = (short)2127;
unsigned short var_10 = (unsigned short)5395;
int zero = 0;
short var_11 = (short)29191;
short var_12 = (short)-21966;
unsigned short var_13 = (unsigned short)25818;
void init() {
}

void checksum() {
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
