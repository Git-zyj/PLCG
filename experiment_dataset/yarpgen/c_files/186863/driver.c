#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17374048064154403406ULL;
short var_8 = (short)-5299;
int zero = 0;
short var_15 = (short)19030;
unsigned short var_16 = (unsigned short)43633;
unsigned char var_17 = (unsigned char)108;
short var_18 = (short)-16953;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
