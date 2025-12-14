#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
unsigned char var_1 = (unsigned char)22;
unsigned short var_2 = (unsigned short)57691;
long long int var_10 = -4111799303389123479LL;
unsigned int var_16 = 4292420595U;
int zero = 0;
unsigned long long int var_19 = 1223233366130047569ULL;
int var_20 = -1772195349;
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
