#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)17589;
unsigned long long int var_6 = 2034689764792982543ULL;
unsigned long long int var_7 = 14159111458745470670ULL;
int var_8 = 776571562;
signed char var_9 = (signed char)-93;
int zero = 0;
int var_13 = -1043329046;
unsigned int var_14 = 1574916067U;
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
