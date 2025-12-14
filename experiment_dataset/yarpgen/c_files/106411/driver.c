#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
short var_3 = (short)10075;
unsigned char var_8 = (unsigned char)150;
signed char var_9 = (signed char)118;
short var_11 = (short)7451;
unsigned char var_13 = (unsigned char)79;
int zero = 0;
signed char var_15 = (signed char)101;
unsigned char var_16 = (unsigned char)30;
long long int var_17 = -1043011076212582062LL;
unsigned char var_18 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
