#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 925985630;
int var_4 = -1726649056;
int var_7 = -1107855179;
unsigned short var_9 = (unsigned short)10276;
int zero = 0;
short var_13 = (short)-28762;
unsigned short var_14 = (unsigned short)26784;
int var_15 = 549485645;
unsigned short var_16 = (unsigned short)3361;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
