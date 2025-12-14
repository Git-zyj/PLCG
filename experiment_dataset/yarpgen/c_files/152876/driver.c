#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -957287034;
unsigned char var_1 = (unsigned char)148;
unsigned long long int var_3 = 9359506187536365888ULL;
long long int var_4 = -7554527689558603284LL;
int zero = 0;
int var_10 = -1881540999;
int var_11 = -1196546272;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
