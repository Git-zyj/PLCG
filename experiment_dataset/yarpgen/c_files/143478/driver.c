#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19423;
signed char var_2 = (signed char)-66;
unsigned int var_5 = 2705609856U;
unsigned int var_10 = 2485940805U;
short var_13 = (short)-13980;
int zero = 0;
int var_18 = 1818799915;
long long int var_19 = -1720362017054099678LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
