#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 868820674;
unsigned long long int var_4 = 9287631881830551648ULL;
int var_7 = 1247056924;
int var_15 = -1296095477;
int zero = 0;
unsigned char var_20 = (unsigned char)14;
unsigned int var_21 = 1462623967U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
