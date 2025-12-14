#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-11;
unsigned char var_9 = (unsigned char)186;
long long int var_18 = -7520379598873379862LL;
int zero = 0;
unsigned char var_20 = (unsigned char)158;
short var_21 = (short)-14324;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
