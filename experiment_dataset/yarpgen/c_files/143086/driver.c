#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)208;
unsigned char var_11 = (unsigned char)112;
unsigned char var_14 = (unsigned char)62;
unsigned short var_17 = (unsigned short)5103;
int zero = 0;
int var_19 = -2054167449;
unsigned char var_20 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
