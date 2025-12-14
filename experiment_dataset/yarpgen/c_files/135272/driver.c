#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2731209945U;
unsigned short var_4 = (unsigned short)52487;
unsigned int var_6 = 689405088U;
long long int var_8 = -1274696563205663768LL;
unsigned char var_11 = (unsigned char)173;
unsigned char var_12 = (unsigned char)148;
unsigned char var_13 = (unsigned char)66;
int zero = 0;
unsigned int var_14 = 1238114739U;
long long int var_15 = -5949802692268463285LL;
void init() {
}

void checksum() {
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
