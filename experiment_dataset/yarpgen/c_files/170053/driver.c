#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29491;
unsigned long long int var_16 = 6608385685846305126ULL;
int zero = 0;
unsigned long long int var_19 = 16647915217928899719ULL;
long long int var_20 = 1119871529619510051LL;
signed char var_21 = (signed char)-23;
unsigned char var_22 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
