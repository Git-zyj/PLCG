#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22787;
unsigned short var_1 = (unsigned short)25143;
unsigned long long int var_2 = 208078976790740687ULL;
unsigned short var_7 = (unsigned short)39760;
unsigned short var_9 = (unsigned short)2200;
unsigned long long int var_11 = 14254190429373485793ULL;
int zero = 0;
short var_12 = (short)17670;
unsigned short var_13 = (unsigned short)55250;
void init() {
}

void checksum() {
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
