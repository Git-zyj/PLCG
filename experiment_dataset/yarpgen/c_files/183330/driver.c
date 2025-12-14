#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1708078640;
long long int var_11 = -1942026325501764133LL;
unsigned short var_15 = (unsigned short)34460;
short var_16 = (short)-23474;
signed char var_18 = (signed char)-28;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
int var_20 = -841366046;
signed char var_21 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
