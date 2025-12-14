#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5053941121836766390ULL;
unsigned char var_7 = (unsigned char)212;
unsigned char var_8 = (unsigned char)207;
int zero = 0;
unsigned long long int var_14 = 8098524824196404488ULL;
unsigned char var_15 = (unsigned char)164;
unsigned long long int var_16 = 9890364829849601683ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
