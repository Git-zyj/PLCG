#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)-77;
signed char var_13 = (signed char)49;
unsigned long long int var_14 = 13066192930579354145ULL;
unsigned short var_18 = (unsigned short)57324;
int zero = 0;
short var_20 = (short)-17361;
unsigned char var_21 = (unsigned char)168;
unsigned char var_22 = (unsigned char)219;
unsigned char var_23 = (unsigned char)154;
long long int var_24 = -4157521829266906720LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
