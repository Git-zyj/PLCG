#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
int var_4 = -179482736;
unsigned long long int var_10 = 8164697414345001198ULL;
unsigned char var_11 = (unsigned char)83;
int zero = 0;
short var_12 = (short)-13046;
unsigned short var_13 = (unsigned short)521;
short var_14 = (short)-14831;
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
