#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 511035543U;
unsigned char var_3 = (unsigned char)165;
short var_8 = (short)19698;
int zero = 0;
short var_12 = (short)22173;
unsigned int var_13 = 1316455999U;
unsigned long long int var_14 = 16127032538754316488ULL;
unsigned int var_15 = 844971795U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
