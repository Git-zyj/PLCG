#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
int var_2 = -1082965908;
short var_5 = (short)27356;
unsigned char var_6 = (unsigned char)165;
unsigned char var_9 = (unsigned char)40;
int zero = 0;
long long int var_15 = 8221662271668893505LL;
unsigned long long int var_16 = 17570419651714428578ULL;
long long int var_17 = 4483048422734679576LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
