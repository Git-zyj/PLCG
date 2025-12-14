#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5780502615379083346ULL;
short var_4 = (short)-3752;
unsigned long long int var_6 = 2026513147658205699ULL;
unsigned int var_8 = 2207683775U;
unsigned long long int var_16 = 2449150135314502689ULL;
unsigned int var_17 = 1562681178U;
int zero = 0;
unsigned char var_19 = (unsigned char)133;
unsigned long long int var_20 = 2536892516285747660ULL;
void init() {
}

void checksum() {
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
