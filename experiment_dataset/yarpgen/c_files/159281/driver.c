#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
short var_5 = (short)-26520;
int var_7 = -1759922932;
signed char var_8 = (signed char)-83;
signed char var_13 = (signed char)122;
short var_15 = (short)9874;
int zero = 0;
unsigned char var_16 = (unsigned char)164;
short var_17 = (short)29536;
void init() {
}

void checksum() {
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
