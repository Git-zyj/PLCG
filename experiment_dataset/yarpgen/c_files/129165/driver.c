#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned char var_2 = (unsigned char)3;
unsigned short var_6 = (unsigned short)33432;
unsigned char var_7 = (unsigned char)209;
unsigned int var_11 = 2232687517U;
int zero = 0;
int var_16 = 1907530792;
int var_17 = -1837939984;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
