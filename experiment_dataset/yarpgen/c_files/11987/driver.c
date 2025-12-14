#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
short var_1 = (short)7978;
unsigned int var_7 = 3490365172U;
short var_13 = (short)-7181;
int zero = 0;
unsigned char var_18 = (unsigned char)131;
signed char var_19 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
