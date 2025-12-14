#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15141554802115267988ULL;
unsigned char var_6 = (unsigned char)150;
unsigned short var_8 = (unsigned short)55780;
unsigned short var_9 = (unsigned short)20394;
unsigned int var_10 = 2822101478U;
int zero = 0;
unsigned int var_11 = 838288704U;
unsigned int var_12 = 4077293388U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
