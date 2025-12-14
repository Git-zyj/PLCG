#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46302;
unsigned short var_4 = (unsigned short)27491;
unsigned short var_6 = (unsigned short)45529;
unsigned long long int var_7 = 4644732047299376340ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)95;
unsigned short var_16 = (unsigned short)41610;
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
