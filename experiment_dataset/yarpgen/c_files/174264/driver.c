#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1557134870572161064LL;
unsigned long long int var_5 = 15876635827310906015ULL;
unsigned char var_6 = (unsigned char)108;
unsigned int var_7 = 251381538U;
int var_8 = -1161713286;
signed char var_9 = (signed char)100;
unsigned int var_13 = 3253576287U;
int zero = 0;
unsigned char var_14 = (unsigned char)149;
int var_15 = 1841295606;
void init() {
}

void checksum() {
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
