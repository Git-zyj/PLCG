#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22401;
long long int var_3 = 4455642899077019422LL;
long long int var_6 = 2775766847853352259LL;
int zero = 0;
unsigned char var_11 = (unsigned char)90;
unsigned char var_12 = (unsigned char)25;
long long int var_13 = 7234248184328092754LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
