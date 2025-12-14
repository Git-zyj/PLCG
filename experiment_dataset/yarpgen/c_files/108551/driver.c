#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)54428;
int var_6 = -1311764119;
unsigned short var_8 = (unsigned short)57829;
int zero = 0;
unsigned char var_15 = (unsigned char)96;
unsigned long long int var_16 = 3789995395563556179ULL;
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
