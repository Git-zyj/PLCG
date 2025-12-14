#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)46;
unsigned long long int var_17 = 1064227381415788470ULL;
unsigned char var_18 = (unsigned char)137;
int zero = 0;
unsigned char var_19 = (unsigned char)57;
unsigned short var_20 = (unsigned short)44332;
unsigned char var_21 = (unsigned char)170;
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
