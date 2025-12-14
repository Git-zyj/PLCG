#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)131;
short var_5 = (short)7148;
signed char var_8 = (signed char)89;
long long int var_11 = -3377296095111710733LL;
unsigned long long int var_14 = 3884395798813121557ULL;
int zero = 0;
int var_16 = -1071411220;
unsigned short var_17 = (unsigned short)36501;
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
