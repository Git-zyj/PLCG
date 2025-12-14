#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1284238024U;
unsigned short var_3 = (unsigned short)21605;
unsigned short var_5 = (unsigned short)26457;
int var_14 = -1456266406;
int zero = 0;
int var_17 = 2111930038;
unsigned char var_18 = (unsigned char)250;
void init() {
}

void checksum() {
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
