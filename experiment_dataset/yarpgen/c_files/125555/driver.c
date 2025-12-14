#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1763736233;
unsigned int var_3 = 2239918496U;
int var_4 = 988652304;
unsigned int var_5 = 4084802743U;
unsigned char var_6 = (unsigned char)2;
long long int var_10 = -8564210653198966832LL;
int zero = 0;
short var_11 = (short)17002;
signed char var_12 = (signed char)67;
unsigned short var_13 = (unsigned short)31773;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
