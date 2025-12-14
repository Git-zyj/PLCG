#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)25278;
unsigned long long int var_5 = 4816090590957016372ULL;
unsigned short var_9 = (unsigned short)5866;
unsigned short var_10 = (unsigned short)28512;
unsigned short var_12 = (unsigned short)58794;
int zero = 0;
int var_13 = 1033393310;
unsigned long long int var_14 = 4997863165702175908ULL;
unsigned short var_15 = (unsigned short)6576;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
