#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)373;
int var_1 = 759595633;
unsigned short var_2 = (unsigned short)52207;
signed char var_3 = (signed char)10;
unsigned short var_7 = (unsigned short)58508;
long long int var_9 = 4079905218233315216LL;
int zero = 0;
signed char var_10 = (signed char)-104;
unsigned char var_11 = (unsigned char)241;
unsigned int var_12 = 2046622660U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
