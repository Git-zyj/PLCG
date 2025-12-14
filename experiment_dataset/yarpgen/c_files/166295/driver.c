#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 380065335339079373ULL;
int var_7 = -1761628278;
unsigned char var_10 = (unsigned char)252;
int zero = 0;
unsigned long long int var_12 = 15925822516988509302ULL;
unsigned char var_13 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
