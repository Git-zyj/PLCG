#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1332022839;
unsigned char var_10 = (unsigned char)124;
unsigned short var_13 = (unsigned short)37715;
int zero = 0;
signed char var_18 = (signed char)-65;
unsigned short var_19 = (unsigned short)22673;
short var_20 = (short)-15304;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
