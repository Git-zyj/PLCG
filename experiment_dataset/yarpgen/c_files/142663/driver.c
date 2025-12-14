#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1041027799;
unsigned short var_4 = (unsigned short)31699;
unsigned short var_9 = (unsigned short)35352;
int zero = 0;
unsigned short var_11 = (unsigned short)39357;
unsigned short var_12 = (unsigned short)55592;
unsigned short var_13 = (unsigned short)32525;
int var_14 = -1522131835;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
