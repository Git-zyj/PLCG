#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17592618151992485684ULL;
long long int var_2 = -7151676632498117409LL;
long long int var_3 = 2075930385516012260LL;
signed char var_9 = (signed char)10;
unsigned long long int var_11 = 16307115144064086471ULL;
signed char var_15 = (signed char)-31;
int zero = 0;
unsigned char var_16 = (unsigned char)34;
unsigned long long int var_17 = 616819681278646273ULL;
void init() {
}

void checksum() {
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
