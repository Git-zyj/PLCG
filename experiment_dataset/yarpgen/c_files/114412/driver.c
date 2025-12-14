#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59662;
short var_5 = (short)2087;
unsigned long long int var_10 = 17589664862584094610ULL;
int zero = 0;
long long int var_12 = 1009063610212549459LL;
unsigned char var_13 = (unsigned char)43;
void init() {
}

void checksum() {
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
