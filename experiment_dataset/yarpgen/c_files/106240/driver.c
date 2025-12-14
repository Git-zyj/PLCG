#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36959;
long long int var_3 = 813932400901592957LL;
signed char var_5 = (signed char)107;
unsigned long long int var_8 = 4848409547161986149ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)11;
long long int var_14 = -2815636222021148652LL;
signed char var_15 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
