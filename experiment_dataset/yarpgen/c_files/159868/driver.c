#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned long long int var_1 = 7311569939178426434ULL;
signed char var_5 = (signed char)92;
int var_9 = -1418436557;
signed char var_11 = (signed char)-114;
unsigned long long int var_12 = 7521772134963637395ULL;
unsigned char var_13 = (unsigned char)104;
int zero = 0;
unsigned char var_15 = (unsigned char)76;
signed char var_16 = (signed char)-120;
unsigned int var_17 = 1328494055U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
