#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -212853236;
signed char var_10 = (signed char)98;
int zero = 0;
unsigned char var_16 = (unsigned char)99;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12786945573841197003ULL;
unsigned short var_19 = (unsigned short)10242;
unsigned short var_20 = (unsigned short)51875;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
