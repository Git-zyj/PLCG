#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
signed char var_2 = (signed char)-122;
unsigned long long int var_3 = 3239980432450547177ULL;
signed char var_4 = (signed char)-30;
signed char var_7 = (signed char)-106;
int var_8 = -744981031;
int zero = 0;
long long int var_10 = -7109250636481445730LL;
short var_11 = (short)-5785;
unsigned short var_12 = (unsigned short)16414;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
