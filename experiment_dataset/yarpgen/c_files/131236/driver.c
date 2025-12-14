#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17837;
long long int var_3 = 1899797111443474815LL;
long long int var_8 = -5723627668407650238LL;
int var_10 = 1461366062;
short var_15 = (short)-4861;
int zero = 0;
short var_16 = (short)28581;
long long int var_17 = -1268817175609110646LL;
short var_18 = (short)7978;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
