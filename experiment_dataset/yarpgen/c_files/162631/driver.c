#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)59;
unsigned int var_3 = 1836436770U;
int var_4 = -1233828750;
signed char var_11 = (signed char)64;
unsigned char var_12 = (unsigned char)103;
unsigned long long int var_16 = 3471744486040516038ULL;
int zero = 0;
signed char var_17 = (signed char)-70;
unsigned char var_18 = (unsigned char)25;
unsigned short var_19 = (unsigned short)45820;
signed char var_20 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
