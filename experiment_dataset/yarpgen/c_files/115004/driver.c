#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4982524036663812866LL;
short var_10 = (short)-17576;
unsigned long long int var_12 = 6415481463424937616ULL;
unsigned short var_18 = (unsigned short)15071;
int zero = 0;
unsigned char var_20 = (unsigned char)40;
unsigned long long int var_21 = 18446479195821481539ULL;
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
