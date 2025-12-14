#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 343895577;
unsigned long long int var_6 = 11677429006101955150ULL;
long long int var_16 = -1535014170691501731LL;
int zero = 0;
int var_20 = 1194110920;
int var_21 = 1339053901;
unsigned long long int var_22 = 16886146046537597328ULL;
void init() {
}

void checksum() {
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
