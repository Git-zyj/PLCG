#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7461792171287762064LL;
unsigned int var_3 = 1632420220U;
unsigned char var_6 = (unsigned char)56;
unsigned int var_8 = 1947536705U;
unsigned char var_14 = (unsigned char)114;
int zero = 0;
short var_15 = (short)-8937;
short var_16 = (short)-10006;
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
