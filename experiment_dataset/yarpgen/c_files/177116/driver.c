#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60369;
long long int var_2 = 1738289466425048965LL;
unsigned char var_3 = (unsigned char)79;
short var_7 = (short)19338;
unsigned char var_12 = (unsigned char)81;
int zero = 0;
unsigned short var_13 = (unsigned short)59878;
short var_14 = (short)13361;
signed char var_15 = (signed char)54;
void init() {
}

void checksum() {
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
