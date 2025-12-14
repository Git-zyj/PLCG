#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)34;
unsigned int var_8 = 3798450966U;
unsigned char var_14 = (unsigned char)169;
int zero = 0;
unsigned long long int var_16 = 10845731753595375281ULL;
short var_17 = (short)9911;
signed char var_18 = (signed char)-121;
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
