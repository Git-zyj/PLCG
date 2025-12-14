#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-15;
unsigned char var_6 = (unsigned char)113;
short var_8 = (short)-2058;
unsigned short var_9 = (unsigned short)36758;
int zero = 0;
long long int var_12 = 6090364247551099416LL;
int var_13 = 308988432;
unsigned int var_14 = 2482249513U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
