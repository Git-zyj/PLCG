#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)147;
unsigned long long int var_4 = 16990517990764060960ULL;
unsigned short var_6 = (unsigned short)3574;
short var_8 = (short)720;
unsigned short var_9 = (unsigned short)41807;
short var_10 = (short)-4216;
unsigned short var_15 = (unsigned short)17358;
int zero = 0;
unsigned long long int var_19 = 12292914206702384337ULL;
int var_20 = -1973412906;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
