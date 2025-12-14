#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23078;
unsigned short var_3 = (unsigned short)18424;
short var_5 = (short)16659;
unsigned int var_6 = 2701757964U;
unsigned int var_7 = 3363451263U;
unsigned char var_11 = (unsigned char)74;
int var_12 = -389067227;
long long int var_14 = -214324196449531489LL;
int zero = 0;
unsigned int var_16 = 675107506U;
unsigned long long int var_17 = 18312467891191332344ULL;
unsigned long long int var_18 = 10267971944915633259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
