#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12206;
unsigned char var_7 = (unsigned char)81;
short var_10 = (short)21588;
int zero = 0;
unsigned long long int var_12 = 14053539550184613794ULL;
unsigned long long int var_13 = 4148985055202425273ULL;
unsigned long long int var_14 = 5668970471131758866ULL;
short var_15 = (short)-14902;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
