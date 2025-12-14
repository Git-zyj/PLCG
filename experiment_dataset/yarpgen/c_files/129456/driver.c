#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)14;
unsigned long long int var_5 = 4817874958060500557ULL;
unsigned short var_12 = (unsigned short)61907;
int zero = 0;
int var_14 = -67416059;
long long int var_15 = 4981798748054503434LL;
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
