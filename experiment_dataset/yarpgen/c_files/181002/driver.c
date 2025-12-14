#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26859;
unsigned int var_7 = 3225023230U;
unsigned short var_12 = (unsigned short)9859;
short var_14 = (short)13050;
int zero = 0;
unsigned short var_18 = (unsigned short)24170;
unsigned long long int var_19 = 15606953652794814489ULL;
unsigned char var_20 = (unsigned char)58;
unsigned int var_21 = 2604858760U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
