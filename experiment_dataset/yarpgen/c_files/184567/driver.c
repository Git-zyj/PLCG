#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 980387121;
unsigned short var_4 = (unsigned short)8305;
unsigned short var_6 = (unsigned short)12829;
unsigned short var_7 = (unsigned short)37631;
short var_9 = (short)-740;
int zero = 0;
unsigned short var_10 = (unsigned short)36459;
signed char var_11 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
