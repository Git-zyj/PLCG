#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)23046;
int var_6 = -1094564375;
long long int var_8 = 2240139055375583865LL;
int var_9 = -1085378788;
int zero = 0;
unsigned short var_12 = (unsigned short)49784;
unsigned short var_13 = (unsigned short)24533;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
