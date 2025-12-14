#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 614776803;
long long int var_3 = -7488095080752750643LL;
unsigned char var_4 = (unsigned char)181;
long long int var_9 = -4093260309781572857LL;
signed char var_11 = (signed char)-54;
int zero = 0;
unsigned char var_14 = (unsigned char)242;
unsigned short var_15 = (unsigned short)64491;
signed char var_16 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
