#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-30995;
short var_11 = (short)-5383;
long long int var_15 = 8066432932624858891LL;
int var_17 = 334350432;
int zero = 0;
short var_18 = (short)-5648;
unsigned char var_19 = (unsigned char)127;
unsigned char var_20 = (unsigned char)207;
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
