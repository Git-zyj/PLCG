#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18730;
short var_7 = (short)20020;
unsigned char var_9 = (unsigned char)219;
unsigned long long int var_10 = 392899002975066738ULL;
unsigned char var_11 = (unsigned char)20;
int var_14 = 1839632049;
int zero = 0;
signed char var_15 = (signed char)-121;
short var_16 = (short)-31978;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
