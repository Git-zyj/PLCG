#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11859;
int var_5 = 1794308794;
int var_6 = 1526112272;
unsigned char var_7 = (unsigned char)206;
long long int var_8 = -4369053719691636900LL;
unsigned int var_10 = 1884207644U;
int var_12 = 1192526883;
unsigned char var_13 = (unsigned char)191;
int zero = 0;
unsigned short var_14 = (unsigned short)32087;
unsigned char var_15 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
