#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16150219215752273684ULL;
long long int var_12 = -2165003246153919631LL;
unsigned int var_14 = 2910746756U;
int zero = 0;
unsigned char var_16 = (unsigned char)94;
short var_17 = (short)-12868;
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
