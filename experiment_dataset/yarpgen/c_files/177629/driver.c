#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1719640749U;
signed char var_2 = (signed char)62;
unsigned long long int var_3 = 13964961709968163917ULL;
unsigned char var_5 = (unsigned char)27;
unsigned char var_6 = (unsigned char)37;
unsigned int var_9 = 1227415605U;
int zero = 0;
int var_10 = -1833377815;
unsigned char var_11 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
