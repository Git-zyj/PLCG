#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 66202162;
int var_8 = -1168927247;
signed char var_9 = (signed char)46;
unsigned char var_10 = (unsigned char)124;
unsigned long long int var_14 = 4071894532649543683ULL;
int zero = 0;
short var_16 = (short)31246;
short var_17 = (short)18382;
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
