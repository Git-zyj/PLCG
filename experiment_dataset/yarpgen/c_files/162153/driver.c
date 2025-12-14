#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4106380773U;
unsigned char var_2 = (unsigned char)40;
unsigned int var_4 = 1328104620U;
unsigned int var_6 = 787243248U;
unsigned int var_9 = 2746828444U;
int zero = 0;
unsigned long long int var_10 = 5413333065271287340ULL;
unsigned int var_11 = 2584356812U;
unsigned long long int var_12 = 10900325213632605748ULL;
unsigned int var_13 = 1388339783U;
unsigned int var_14 = 855565157U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
