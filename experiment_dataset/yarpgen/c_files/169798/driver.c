#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43522;
unsigned int var_6 = 2623393421U;
unsigned short var_7 = (unsigned short)19302;
int var_9 = 1634301611;
int var_11 = 1531297072;
unsigned long long int var_13 = 15813807450907044269ULL;
unsigned char var_14 = (unsigned char)219;
unsigned long long int var_15 = 1332046258374500577ULL;
int zero = 0;
int var_16 = -466825536;
unsigned int var_17 = 2351735225U;
unsigned short var_18 = (unsigned short)32716;
void init() {
}

void checksum() {
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
