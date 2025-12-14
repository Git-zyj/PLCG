#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3922594824100916277LL;
short var_8 = (short)-4267;
int zero = 0;
unsigned char var_16 = (unsigned char)154;
unsigned int var_17 = 3162464065U;
unsigned short var_18 = (unsigned short)51755;
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
