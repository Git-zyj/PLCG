#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)37;
unsigned int var_4 = 1934754833U;
unsigned char var_6 = (unsigned char)111;
long long int var_9 = 6660239863629674570LL;
unsigned long long int var_11 = 6376749572628091416ULL;
int var_12 = 832641781;
unsigned int var_14 = 2588611512U;
int zero = 0;
long long int var_15 = 2593527048845794702LL;
unsigned short var_16 = (unsigned short)14693;
int var_17 = 1546780004;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
