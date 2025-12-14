#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)10300;
unsigned int var_9 = 4248033983U;
unsigned long long int var_15 = 1629046655475456056ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)117;
int var_18 = -42160382;
void init() {
}

void checksum() {
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
