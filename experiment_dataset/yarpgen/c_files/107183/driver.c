#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned short var_2 = (unsigned short)27511;
unsigned char var_3 = (unsigned char)33;
unsigned char var_4 = (unsigned char)164;
signed char var_7 = (signed char)-116;
int zero = 0;
int var_11 = -1623136191;
signed char var_12 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
