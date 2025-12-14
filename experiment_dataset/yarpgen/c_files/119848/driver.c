#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 345863130U;
short var_1 = (short)-4604;
unsigned int var_2 = 3475376588U;
unsigned char var_6 = (unsigned char)149;
unsigned int var_7 = 2194793951U;
int var_9 = -925964445;
int var_10 = 956388656;
int zero = 0;
short var_11 = (short)-19381;
signed char var_12 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
