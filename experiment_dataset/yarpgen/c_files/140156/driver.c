#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1362259513U;
unsigned long long int var_3 = 6579012464177056098ULL;
unsigned int var_8 = 3058861865U;
int var_10 = -1727489444;
int var_11 = 596636902;
int var_12 = -133415293;
int zero = 0;
unsigned char var_13 = (unsigned char)177;
short var_14 = (short)20659;
int var_15 = -1793309723;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
