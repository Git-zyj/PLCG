#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
unsigned int var_2 = 2739883679U;
unsigned char var_3 = (unsigned char)162;
unsigned long long int var_6 = 5229476924426935212ULL;
unsigned long long int var_9 = 10347606159699874082ULL;
int zero = 0;
short var_12 = (short)32265;
short var_13 = (short)2611;
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
