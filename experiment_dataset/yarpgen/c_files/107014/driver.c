#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37344;
unsigned char var_8 = (unsigned char)54;
unsigned long long int var_9 = 880001304371473171ULL;
unsigned long long int var_10 = 5015702153114452537ULL;
int var_11 = 1116733059;
int zero = 0;
unsigned short var_15 = (unsigned short)18924;
int var_16 = -1337052424;
unsigned char var_17 = (unsigned char)202;
int var_18 = -1016987702;
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
