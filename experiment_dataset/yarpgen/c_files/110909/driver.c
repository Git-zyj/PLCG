#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
long long int var_1 = -1230068967778920523LL;
unsigned int var_3 = 3448551715U;
int var_5 = 1734049145;
long long int var_8 = 1006588898390407630LL;
long long int var_11 = 4576709525738550238LL;
unsigned char var_12 = (unsigned char)227;
int zero = 0;
int var_13 = 1417589323;
long long int var_14 = 541808715358024207LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
