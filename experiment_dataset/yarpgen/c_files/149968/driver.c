#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5988788729177988082ULL;
unsigned char var_1 = (unsigned char)63;
int var_2 = 2089140986;
int var_10 = -1302191578;
unsigned long long int var_13 = 10234839281724948959ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)49470;
unsigned char var_15 = (unsigned char)244;
void init() {
}

void checksum() {
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
