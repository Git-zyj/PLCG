#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
int var_3 = 50064982;
unsigned short var_10 = (unsigned short)56939;
unsigned char var_12 = (unsigned char)229;
unsigned char var_13 = (unsigned char)170;
int zero = 0;
unsigned long long int var_15 = 8750398714207574597ULL;
unsigned long long int var_16 = 6338063803749831915ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
