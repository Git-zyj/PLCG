#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)17;
short var_10 = (short)23937;
unsigned char var_11 = (unsigned char)94;
long long int var_16 = -8299929133860542852LL;
int zero = 0;
int var_20 = 1892131511;
unsigned long long int var_21 = 190727778708202734ULL;
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
