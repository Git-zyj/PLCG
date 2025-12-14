#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 262372675;
unsigned int var_5 = 236985774U;
unsigned long long int var_6 = 7633102796716361998ULL;
unsigned short var_9 = (unsigned short)40287;
int zero = 0;
short var_12 = (short)32027;
unsigned long long int var_13 = 12387068752413788111ULL;
unsigned char var_14 = (unsigned char)132;
unsigned char var_15 = (unsigned char)242;
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
