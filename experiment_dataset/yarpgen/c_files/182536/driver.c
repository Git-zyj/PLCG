#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9828685853905989333ULL;
short var_6 = (short)520;
short var_7 = (short)-30484;
int var_8 = 350257538;
int zero = 0;
unsigned short var_11 = (unsigned short)23139;
unsigned int var_12 = 3797470695U;
unsigned long long int var_13 = 15235115988909957386ULL;
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
