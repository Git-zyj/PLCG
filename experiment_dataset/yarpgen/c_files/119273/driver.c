#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
unsigned long long int var_6 = 12507410709041816252ULL;
unsigned long long int var_8 = 14658741260977657355ULL;
int zero = 0;
signed char var_13 = (signed char)84;
short var_14 = (short)17265;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
