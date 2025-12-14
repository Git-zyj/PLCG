#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27052;
unsigned short var_6 = (unsigned short)16380;
unsigned short var_7 = (unsigned short)16477;
unsigned short var_11 = (unsigned short)40871;
unsigned short var_13 = (unsigned short)6060;
int zero = 0;
unsigned short var_15 = (unsigned short)10799;
unsigned short var_16 = (unsigned short)19376;
void init() {
}

void checksum() {
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
