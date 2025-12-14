#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)104;
unsigned int var_2 = 4274794302U;
unsigned int var_3 = 1527402398U;
unsigned char var_4 = (unsigned char)85;
short var_5 = (short)-14967;
unsigned int var_6 = 710924230U;
long long int var_7 = 5787244482689739927LL;
unsigned int var_10 = 4084449678U;
int zero = 0;
unsigned long long int var_14 = 14030409292203222845ULL;
unsigned char var_15 = (unsigned char)155;
short var_16 = (short)7750;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
