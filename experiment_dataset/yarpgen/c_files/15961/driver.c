#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14197272278272331086ULL;
int var_5 = -2052567170;
unsigned int var_9 = 853659506U;
int zero = 0;
unsigned short var_10 = (unsigned short)45773;
unsigned long long int var_11 = 17514366120317850792ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
