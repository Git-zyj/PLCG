#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2752053080202629699LL;
unsigned int var_7 = 1258706006U;
unsigned long long int var_11 = 4897317415302217692ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)47930;
unsigned short var_13 = (unsigned short)15621;
unsigned char var_14 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
