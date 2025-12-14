#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2827541242U;
unsigned short var_4 = (unsigned short)62490;
int var_5 = 1721791931;
int zero = 0;
unsigned char var_18 = (unsigned char)93;
unsigned int var_19 = 3466342230U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
