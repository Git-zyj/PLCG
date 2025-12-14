#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)74;
unsigned char var_2 = (unsigned char)183;
unsigned short var_3 = (unsigned short)60492;
unsigned short var_11 = (unsigned short)51029;
int zero = 0;
unsigned short var_12 = (unsigned short)35030;
short var_13 = (short)1277;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
