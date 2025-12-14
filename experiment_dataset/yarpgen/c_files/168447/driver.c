#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned long long int var_3 = 4533200991776425381ULL;
unsigned char var_8 = (unsigned char)142;
int zero = 0;
unsigned long long int var_10 = 12379085742185827511ULL;
unsigned short var_11 = (unsigned short)40981;
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
