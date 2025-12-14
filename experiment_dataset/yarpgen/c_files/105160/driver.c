#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)66;
unsigned long long int var_5 = 5069521911893431067ULL;
unsigned short var_9 = (unsigned short)64540;
int zero = 0;
unsigned char var_16 = (unsigned char)141;
unsigned char var_17 = (unsigned char)138;
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
