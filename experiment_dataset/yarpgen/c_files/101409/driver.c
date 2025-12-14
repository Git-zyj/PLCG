#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62322;
unsigned short var_2 = (unsigned short)63123;
unsigned short var_4 = (unsigned short)55500;
unsigned short var_5 = (unsigned short)17218;
unsigned short var_6 = (unsigned short)63447;
unsigned short var_7 = (unsigned short)21698;
unsigned short var_8 = (unsigned short)54132;
unsigned short var_12 = (unsigned short)51212;
int zero = 0;
unsigned short var_13 = (unsigned short)21871;
unsigned short var_14 = (unsigned short)32853;
unsigned short var_15 = (unsigned short)10515;
unsigned short var_16 = (unsigned short)61320;
unsigned short var_17 = (unsigned short)11898;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
