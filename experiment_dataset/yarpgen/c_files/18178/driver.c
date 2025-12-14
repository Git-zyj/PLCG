#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
unsigned short var_6 = (unsigned short)17176;
unsigned char var_7 = (unsigned char)88;
unsigned int var_9 = 4294624889U;
int zero = 0;
unsigned char var_17 = (unsigned char)25;
int var_18 = 617829075;
long long int var_19 = 8301902366076111789LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
