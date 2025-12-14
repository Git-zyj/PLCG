#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3518899881514824490LL;
unsigned char var_5 = (unsigned char)149;
long long int var_12 = 8824021520011445762LL;
int var_13 = -937877090;
int zero = 0;
unsigned short var_17 = (unsigned short)21253;
unsigned long long int var_18 = 10173410849102530973ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
