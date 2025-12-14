#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1740957004;
unsigned short var_5 = (unsigned short)60441;
unsigned char var_11 = (unsigned char)77;
int zero = 0;
unsigned short var_12 = (unsigned short)16880;
int var_13 = 1813803717;
unsigned short var_14 = (unsigned short)19896;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
