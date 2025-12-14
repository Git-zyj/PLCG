#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1404724200750957102LL;
unsigned short var_1 = (unsigned short)11492;
unsigned char var_8 = (unsigned char)43;
long long int var_10 = 1468724118301767157LL;
long long int var_14 = -137181731560539522LL;
unsigned short var_18 = (unsigned short)52837;
int zero = 0;
short var_20 = (short)-4318;
long long int var_21 = -4838565601753822781LL;
long long int var_22 = 2001897631161040222LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
