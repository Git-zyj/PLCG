#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17131;
unsigned char var_4 = (unsigned char)61;
int var_6 = 28223562;
int var_7 = -1198816311;
unsigned long long int var_8 = 1281818191789685988ULL;
int var_9 = 668840972;
int var_10 = -1807914891;
unsigned char var_12 = (unsigned char)118;
int zero = 0;
short var_16 = (short)-9389;
short var_17 = (short)-28800;
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
