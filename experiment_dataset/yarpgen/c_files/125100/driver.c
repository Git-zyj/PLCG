#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 930814154U;
signed char var_9 = (signed char)-60;
unsigned char var_10 = (unsigned char)58;
long long int var_11 = -512254467368642622LL;
unsigned char var_15 = (unsigned char)35;
int zero = 0;
unsigned int var_16 = 145941960U;
unsigned char var_17 = (unsigned char)17;
void init() {
}

void checksum() {
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
