#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-110;
unsigned char var_8 = (unsigned char)245;
unsigned short var_9 = (unsigned short)38923;
int zero = 0;
int var_16 = 67903666;
unsigned short var_17 = (unsigned short)61416;
unsigned long long int var_18 = 17305147666000155849ULL;
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
