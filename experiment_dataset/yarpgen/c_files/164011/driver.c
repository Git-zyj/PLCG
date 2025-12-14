#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8732;
unsigned long long int var_2 = 18341227551807283028ULL;
unsigned char var_6 = (unsigned char)206;
int zero = 0;
int var_10 = -1090739155;
unsigned char var_11 = (unsigned char)255;
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
