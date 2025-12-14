#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -100674350;
unsigned int var_2 = 3993262984U;
int var_3 = -971744347;
unsigned int var_4 = 495055100U;
unsigned short var_5 = (unsigned short)5968;
unsigned int var_6 = 611047572U;
long long int var_7 = 2825312927873886312LL;
unsigned short var_9 = (unsigned short)11898;
unsigned int var_10 = 1751196925U;
int var_12 = -1445692307;
int zero = 0;
unsigned char var_14 = (unsigned char)227;
long long int var_15 = -990086192010702311LL;
int var_16 = 1636162369;
long long int var_17 = 3154200229329771744LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
