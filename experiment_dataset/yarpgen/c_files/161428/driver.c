#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9085781224684470104ULL;
long long int var_7 = -5431007113447170490LL;
int var_13 = 411168184;
int zero = 0;
unsigned char var_16 = (unsigned char)180;
unsigned short var_17 = (unsigned short)27629;
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
