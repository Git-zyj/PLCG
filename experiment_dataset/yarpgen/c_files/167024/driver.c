#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)103;
unsigned short var_5 = (unsigned short)56807;
unsigned int var_13 = 319089322U;
int zero = 0;
unsigned char var_14 = (unsigned char)181;
long long int var_15 = 8369517988940599225LL;
void init() {
}

void checksum() {
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
