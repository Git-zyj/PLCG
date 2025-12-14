#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1287421819;
short var_4 = (short)8550;
short var_5 = (short)-24667;
long long int var_12 = 5186843864199587116LL;
int zero = 0;
int var_16 = -2022880636;
unsigned short var_17 = (unsigned short)57301;
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
