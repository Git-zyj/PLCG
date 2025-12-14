#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
unsigned int var_2 = 3788962786U;
unsigned short var_6 = (unsigned short)2031;
unsigned short var_9 = (unsigned short)19328;
int zero = 0;
unsigned int var_11 = 3371841192U;
unsigned long long int var_12 = 5438809958500923363ULL;
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
