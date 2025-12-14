#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32248;
int var_6 = 1244538102;
long long int var_8 = -563116493077204640LL;
int var_12 = 1067060881;
int zero = 0;
unsigned int var_14 = 1299817501U;
unsigned int var_15 = 3377249213U;
unsigned short var_16 = (unsigned short)33846;
short var_17 = (short)8334;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
