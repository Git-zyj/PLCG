#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)95;
unsigned char var_4 = (unsigned char)217;
unsigned char var_7 = (unsigned char)137;
unsigned long long int var_13 = 14741494228272584017ULL;
short var_14 = (short)-6299;
unsigned int var_15 = 1276001788U;
int zero = 0;
signed char var_16 = (signed char)-77;
unsigned int var_17 = 2765021479U;
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
