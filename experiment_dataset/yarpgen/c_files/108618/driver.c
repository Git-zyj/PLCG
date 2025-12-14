#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7898975445304485486LL;
unsigned char var_2 = (unsigned char)117;
unsigned char var_3 = (unsigned char)43;
short var_5 = (short)-15065;
long long int var_14 = -8901000731196732767LL;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
unsigned char var_17 = (unsigned char)97;
long long int var_18 = 8632931386703535404LL;
void init() {
}

void checksum() {
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
