#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1782480833;
unsigned int var_3 = 911598693U;
long long int var_5 = -1702639671178171249LL;
long long int var_7 = -6446352489837240668LL;
unsigned short var_8 = (unsigned short)51911;
unsigned char var_9 = (unsigned char)245;
int zero = 0;
unsigned short var_12 = (unsigned short)45867;
int var_13 = -1697253110;
unsigned char var_14 = (unsigned char)243;
unsigned char var_15 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
