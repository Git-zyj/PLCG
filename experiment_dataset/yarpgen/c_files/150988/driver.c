#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 824813367U;
int var_1 = 803696034;
unsigned long long int var_3 = 1814439424695467123ULL;
unsigned int var_4 = 2868131206U;
unsigned char var_7 = (unsigned char)125;
short var_11 = (short)19957;
int var_13 = 1416100454;
int zero = 0;
unsigned char var_15 = (unsigned char)175;
unsigned short var_16 = (unsigned short)4425;
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
