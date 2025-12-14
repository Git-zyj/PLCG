#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5023019511387338737LL;
unsigned char var_5 = (unsigned char)44;
unsigned short var_6 = (unsigned short)10665;
unsigned short var_7 = (unsigned short)49499;
short var_10 = (short)24311;
unsigned long long int var_11 = 5979697188473096669ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)139;
unsigned short var_13 = (unsigned short)7301;
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
