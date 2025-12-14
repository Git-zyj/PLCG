#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
unsigned short var_3 = (unsigned short)42920;
unsigned int var_5 = 2584337572U;
long long int var_6 = 2293242427410285453LL;
unsigned int var_8 = 3217491192U;
int var_9 = 665480488;
int var_10 = -1135763616;
int zero = 0;
int var_11 = -42640641;
unsigned char var_12 = (unsigned char)146;
unsigned char var_13 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
