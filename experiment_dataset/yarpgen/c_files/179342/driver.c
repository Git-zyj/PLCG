#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35654;
int var_4 = 1742905718;
signed char var_9 = (signed char)106;
signed char var_11 = (signed char)123;
short var_13 = (short)2631;
signed char var_15 = (signed char)-71;
unsigned short var_18 = (unsigned short)48493;
int zero = 0;
unsigned short var_20 = (unsigned short)5873;
short var_21 = (short)-30156;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
