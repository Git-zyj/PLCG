#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1712925978397722509LL;
signed char var_11 = (signed char)9;
int var_12 = 1915003223;
int zero = 0;
signed char var_19 = (signed char)-65;
unsigned char var_20 = (unsigned char)113;
unsigned short var_21 = (unsigned short)26643;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
