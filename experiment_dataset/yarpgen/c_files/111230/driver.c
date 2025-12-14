#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-94;
unsigned short var_8 = (unsigned short)17848;
signed char var_15 = (signed char)-32;
unsigned long long int var_18 = 6851333079274484092ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)247;
signed char var_21 = (signed char)64;
unsigned short var_22 = (unsigned short)50352;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
