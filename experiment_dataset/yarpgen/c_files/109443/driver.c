#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)197;
unsigned long long int var_6 = 18119205997729466860ULL;
unsigned char var_7 = (unsigned char)168;
unsigned long long int var_11 = 9322638246960927468ULL;
unsigned long long int var_17 = 15380663533878700623ULL;
int zero = 0;
unsigned long long int var_20 = 6055940333920487208ULL;
signed char var_21 = (signed char)-11;
long long int var_22 = 7078737517711866897LL;
unsigned char var_23 = (unsigned char)29;
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
