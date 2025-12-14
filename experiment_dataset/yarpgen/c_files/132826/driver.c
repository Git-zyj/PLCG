#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40317;
int var_3 = -1764540791;
short var_5 = (short)-15133;
short var_10 = (short)25907;
int var_11 = 2041732665;
short var_15 = (short)3570;
int var_16 = -614837433;
int zero = 0;
long long int var_18 = 8993770572984681556LL;
unsigned short var_19 = (unsigned short)36451;
int var_20 = -828809572;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
