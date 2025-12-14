#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)177;
signed char var_5 = (signed char)119;
unsigned long long int var_8 = 16042556303653396726ULL;
int zero = 0;
unsigned long long int var_12 = 15448355868475201320ULL;
unsigned short var_13 = (unsigned short)40011;
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
