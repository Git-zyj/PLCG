#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
int var_4 = 770009118;
unsigned char var_6 = (unsigned char)228;
unsigned char var_11 = (unsigned char)101;
int zero = 0;
unsigned long long int var_12 = 4874084468193040276ULL;
signed char var_13 = (signed char)-9;
short var_14 = (short)-7874;
unsigned char var_15 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
