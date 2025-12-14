#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7564021931461734679LL;
unsigned char var_8 = (unsigned char)189;
long long int var_11 = -9094310206335919865LL;
int zero = 0;
int var_13 = 1898979091;
unsigned short var_14 = (unsigned short)49353;
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
