#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6266;
signed char var_2 = (signed char)-37;
unsigned char var_5 = (unsigned char)36;
unsigned char var_7 = (unsigned char)70;
short var_10 = (short)-29447;
int var_13 = -871074953;
short var_14 = (short)3909;
int zero = 0;
int var_15 = 1564866300;
int var_16 = -645618949;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
