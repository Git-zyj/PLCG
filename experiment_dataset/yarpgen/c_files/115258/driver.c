#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
unsigned long long int var_7 = 13873567395242567969ULL;
unsigned int var_8 = 4069857218U;
unsigned short var_12 = (unsigned short)24113;
int zero = 0;
unsigned int var_20 = 848129011U;
unsigned long long int var_21 = 3804122613622611777ULL;
unsigned int var_22 = 506324717U;
unsigned char var_23 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
