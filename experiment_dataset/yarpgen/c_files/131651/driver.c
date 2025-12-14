#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)8;
int var_7 = -1107798666;
int var_8 = 1866387186;
unsigned long long int var_12 = 7974094711606791060ULL;
int zero = 0;
signed char var_14 = (signed char)-50;
short var_15 = (short)-2587;
unsigned char var_16 = (unsigned char)101;
unsigned char var_17 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
