#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned char var_1 = (unsigned char)75;
short var_9 = (short)-20590;
long long int var_11 = 5220154333477791868LL;
int zero = 0;
unsigned char var_15 = (unsigned char)53;
long long int var_16 = -5901686079962641973LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
