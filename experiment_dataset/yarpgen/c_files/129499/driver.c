#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
unsigned char var_5 = (unsigned char)110;
unsigned char var_8 = (unsigned char)151;
unsigned int var_9 = 3042253510U;
unsigned int var_11 = 1324415097U;
int zero = 0;
unsigned char var_12 = (unsigned char)96;
unsigned short var_13 = (unsigned short)23279;
unsigned short var_14 = (unsigned short)23353;
unsigned int var_15 = 1530991190U;
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
