#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1661132216640234597LL;
unsigned long long int var_4 = 6386058269702533424ULL;
unsigned char var_9 = (unsigned char)17;
int zero = 0;
int var_13 = -910838181;
long long int var_14 = -6657015943497345678LL;
unsigned short var_15 = (unsigned short)49897;
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
