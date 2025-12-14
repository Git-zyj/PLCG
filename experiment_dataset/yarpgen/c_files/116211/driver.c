#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11719555947377475333ULL;
unsigned char var_4 = (unsigned char)185;
unsigned long long int var_6 = 17832341964335944121ULL;
int zero = 0;
unsigned long long int var_14 = 3665398265153912284ULL;
unsigned short var_15 = (unsigned short)1780;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
