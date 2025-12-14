#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3590011263U;
unsigned long long int var_5 = 6426833665201798239ULL;
short var_6 = (short)22402;
long long int var_8 = 2862808387947168596LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)59341;
unsigned char var_14 = (unsigned char)181;
int var_15 = 1530942528;
signed char var_16 = (signed char)21;
unsigned char var_17 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
