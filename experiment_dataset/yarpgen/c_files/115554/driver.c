#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)7546;
unsigned short var_9 = (unsigned short)1918;
unsigned char var_11 = (unsigned char)155;
int zero = 0;
int var_16 = -1909037448;
signed char var_17 = (signed char)18;
unsigned long long int var_18 = 15192306107633411985ULL;
unsigned long long int var_19 = 14203685864479960923ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
