#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1521953078U;
short var_3 = (short)-698;
int zero = 0;
unsigned short var_14 = (unsigned short)2657;
unsigned char var_15 = (unsigned char)228;
unsigned char var_16 = (unsigned char)206;
signed char var_17 = (signed char)-72;
void init() {
}

void checksum() {
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
